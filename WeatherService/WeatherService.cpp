#include <iostream>
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

}

