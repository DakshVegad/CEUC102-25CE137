#include "class.h"

Celsius::Celsius(float t) {
    temp = t;
}

float Celsius::getTemp() const {
    return temp;
}

Celsius::operator Fahrenheit() {
    return Fahrenheit((temp * 9 / 5) + 32);
}

bool Celsius::operator==(Celsius c) {
    return temp == c.temp;
}

Fahrenheit::Fahrenheit(float t) {
    temp = t;
}

float Fahrenheit::getTemp() const {
    return temp;
}

Fahrenheit::operator Celsius() {
    return Celsius((temp - 32) * 5 / 9);
}

bool Fahrenheit::operator==(Fahrenheit f) {
    return temp == f.temp;
}