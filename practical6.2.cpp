#include <iostream>
using namespace std;

//base class
class Person {
protected:
    string name;
    int age;

public:
    // Constructor
    Person(string n, int a) {
        name = n;
        age = a;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

//Intermediate Class
class Employee : public Person {
protected:
    int empID;

public:
    // Constructor chaining
    Employee(string n, int a, int id) : Person(n, a) {
        empID = id;
    }

    void displayEmployee() {
        displayPerson();
        cout << "Employee ID: " << empID << endl;
    }

    int getID() {
        return empID;
    }
};

//Derived Class
class Manager : public Employee {
private:
    string department;

public:
    // Constructor chaining
    Manager(string n, int a, int id, string dept)
        : Employee(n, a, id) {
        department = dept;
    }

    void displayManager() {
        displayEmployee();
        cout << "Department: " << department << endl;
        cout << "-------------------------" << endl;
    }
};

int main() {

    cout << "=== Static Storage Method ===\n";

    // Static array of managers
    Manager m[3] = {
        Manager("Daksh", 20, 101, "HR"),
        Manager("Neha", 21, 102, "Finance"),
        Manager("Parth", 22, 103, "IT")
    };

    // Display all managers
    for (int i = 0; i < 3; i++) {
        m[i].displayManager();
    }

    cout << "\n=== Retrieval by Employee ID ===\n";

    int searchID;
    cout << "Enter Employee ID to search: ";
    cin >> searchID;

    bool found = false;

    for (int i = 0; i < 3; i++) {
        if (m[i].getID() == searchID) {
            cout << "\nManager Found:\n";
            m[i].displayManager();
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Manager not found!" << endl;
    }

    return 0;
}