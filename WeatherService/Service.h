#pragma once
#include "Weather.h"
#include <string>

class Service : public Weather
{
public:
	virtual Weather getWeather(std::string s) = 0;
};

