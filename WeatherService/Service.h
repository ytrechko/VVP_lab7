#pragma once
#include "Weather.h"
<<<<<<< HEAD

#include <string>

class Service : public Weather
=======
#include <string>
class Service
>>>>>>> feature-xml
{
public:
	virtual Weather getWeather(std::string s) = 0;
};

