#include "XmlService.h"

using namespace pugi;
Weather XmlService::getWeather(std::string s)
{
    xml_document doc;
    xml_parse_result result = doc.load_file(s.c_str());
    if (!result)
        throw exception("error");
    xml_node node = doc.child("current");
    std::string city = node.child("city").
        attribute("name").
        as_string(); //  �����
    double lon = node.child("city").child("coord").
        attribute("lon").
        as_int(); // 49.6601
    double lat = node.child("city").child("coord").attribute("lat").as_double(); // 58.5966
    double temperature = node.child("temperature").
        attribute("value").
        as_double(); // 5.69
    std::string weather = node.child("weather").attribute("value").as_string(); // �����
    double windSpeed = node.child("wind").child("speed").attribute("value").as_double(); // 4.27
    int clouds = node.child("weather").attribute("number").as_int(); // 100
    return Weather(city,lon,lat,temperature,weather,windSpeed,clouds);
}

