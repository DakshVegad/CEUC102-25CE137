#include <iostream>
using namespace std;

class Fuel {
protected:
    string fuelType;

public:
    Fuel(string f) {
        fuelType = f;
    }
};

class Brand {
protected:
    string brandName;

public:
    Brand(string b) {
        brandName = b;
    }
};
class Car : public Fuel, public Brand {
public:
   
    Car() : Fuel(""), Brand("") {}


    Car(string f, string b) : Fuel(f), Brand(b) {}

    void displayCar() {
        cout << "Brand: " << brandName << endl;
        cout << "Fuel Type: " << fuelType << endl;
        cout << "-------------------------" << endl;
    }
};

int main() {

    cout << "=== Static Storage Method ===\n";

    // Static array of cars
    Car cars[3] = {
        Car("Petrol", "Toyota"),
        Car("Diesel", "Hyundai"),
        Car("Electric", "Tesla")
    };

    // Display all cars
    for (int i = 0; i < 3; i++) {
        cars[i].displayCar();
    }

    cout << "\n=== Queue-Based Processing ===\n";

    int n;
    cout << "Enter number of cars: ";
    cin >> n;

    Car *queue = new Car[n];

    string fuel, brand;

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Car " << i + 1 << endl;

        cout << "Enter Brand: ";
        cin >> brand;

        cout << "Enter Fuel Type: ";
        cin >> fuel;

        queue[i] = Car(fuel, brand); 
    }

    cout << "\nProcessing Cars (FIFO Order):\n";

    for (int i = 0; i < n; i++) {
        queue[i].displayCar(); 
    }

    delete[] queue;

    return 0;
}