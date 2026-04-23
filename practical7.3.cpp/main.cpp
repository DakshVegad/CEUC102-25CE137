#include <iostream>
#include <queue>
#include "class.h"
using namespace std;

int main() {

    Celsius c1(25);
    Fahrenheit f1;

    f1 = c1; 
    cout << "25 Celsius = " << f1.getTemp() << " Fahrenheit" << endl;

    Fahrenheit f2(98.6);
    Celsius c2;

    c2 = f2; 
    cout << "98.6 Fahrenheit = " << c2.getTemp() << " Celsius" << endl;

    Celsius c3(25);
    if (c1 == c3) {
        cout << "Celsius values are equal" << endl;
    }

    Fahrenheit f3(98.6);
    if (f2 == f3) {
        cout << "Fahrenheit values are equal" << endl;
    }

    queue<Celsius> cQueue;

    cQueue.push(Celsius(10));
    cQueue.push(Celsius(20));
    cQueue.push(Celsius(30));

    cout << "\nProcessing Celsius Queue:" << endl;
    while (!cQueue.empty()) {
        Celsius temp = cQueue.front();
        Fahrenheit converted = temp;

        cout << temp.getTemp() << "C -> "
             << converted.getTemp() << "F" << endl;

        cQueue.pop();
    }


    Fahrenheit fArray[3] = {Fahrenheit(32), Fahrenheit(68), Fahrenheit(104)};

    cout << "\nArray Conversion (Fahrenheit to Celsius):" << endl;
    for (int i = 0; i < 3; i++) {
        Celsius temp = fArray[i];
        cout << fArray[i].getTemp() << "F -> "
             << temp.getTemp() << "C" << endl;
    }

    return 0;
}