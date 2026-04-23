#include <iostream>
#include <iomanip>
using namespace std;

class Consumer {
    int id;
    string name;
    int units;
    double bill;
    double finalAmount;

public:
    void input() {
        cin >> id >> name >> units;
    }

    void calculate() {
        if (units <= 100)
            bill = units * 3;
        else if (units <= 200)
            bill = 100 * 3 + (units - 100) * 5;
        else
            bill = 100 * 3 + 100 * 5 + (units - 200) * 7;

        finalAmount = bill + bill * 0.05;
    }

    void display() {
    
        cout  << finalAmount << endl;
    }
};

int main() {
    int n;
    cin >> n;
    Consumer c[100];

    for (int i = 0; i < n; i++) {
        c[i].input();
        c[i].calculate();
    }

    for (int i = 0; i < n; i++) {
        c[i].display();
    }

    return 0;
}