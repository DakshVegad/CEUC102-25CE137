#ifndef TEMP_CLASS_H
#define TEMP_CLASS_H
#include <iostream>
using namespace std;

class Fahrenheit;

class Celsius {
private:
    float temp;

public:
    Celsius(float t = 0);

    operator Fahrenheit();

    bool operator==(Celsius c);

    float getTemp() const;
};

class Fahrenheit {
private:
    float temp;

public:
    Fahrenheit(float t = 0);

    operator Celsius();

    bool operator==(Fahrenheit f);

    float getTemp() const;
};

#endif