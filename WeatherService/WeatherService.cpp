#include <iostream>
<<<<<<< HEAD
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
=======
#include "XmlService.h"

int main()
{
    try {
        XmlService xs;
        Weather w = xs.getWeather("weather.xml");
        int u;
    }
    catch (exception& e) {
        cout << e.what();
    }

>>>>>>> feature-xml
}

