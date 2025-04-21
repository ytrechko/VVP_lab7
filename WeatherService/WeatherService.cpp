#include <iostream>
#include "JsonService.h"

int main()
{
	try {
		JsonService js;
		Weather w = js.getWeather("weather.json");
		int i;
	}
	catch (exception& e) {
		cout << e.what();
	}
}

