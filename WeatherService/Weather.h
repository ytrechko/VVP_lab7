#pragma once
#include <string>

using namespace std;
class Weather
{
	string city;
	double lon;
	double lat;
	double temperature;
	string weather;
	double windSpeed;
	int clouds;
public:
	Weather(string city,
<<<<<<< HEAD
	double lon,
	double lat,
	double temperature,
	string weather,
	double windSpeed,
	int clouds) :
		city(city),
=======
		double lon,
		double lat,
		double temperature,
		string weather,
		double windSpeed,
		int clouds) : city(city),
>>>>>>> feature-xml
		lon(lon),
		lat(lat),
		temperature(temperature),
		weather(weather),
		windSpeed(windSpeed),
<<<<<<< HEAD
		clouds(clouds){}
	Weather() {}
	//:city("Киров"),
	//	lon(49.6601), lat(58.5966),
	//	temperature(5.69),
	//	weather("дождь"),
	//	windSpeed(4.27),
	//	clouds(100) {}
=======
		clouds(clouds) {};
	Weather() :city("Киров"),
		lon(49.6601), lat(58.5966),
		temperature(5.69),
		weather("дождь"),
		windSpeed(4.27),
		clouds(100) {}
>>>>>>> feature-xml
};

