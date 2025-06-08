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
	Weather(
	string city,
	double lon,
	double lat,
	double temperature,
	string weather,
	double windSpeed,
	int clouds) :
		city(city),
		lon(lon),
		lat(lat),
		temperature(temperature),
		weather(weather),
		windSpeed(windSpeed),
		clouds(clouds){}

};

