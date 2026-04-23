#include <iostream>
using namespace std;

class Trip {
    int trip_id;
    string name;
    double distance;
    double rate;
    double fare;

public:
    Trip(int t, string n, double d, double r) {
        trip_id = t;
        name = n;
        distance = d;
        rate = r;
        fare = distance * rate;
    }

    void display() {
        cout << fare << endl;
    }
};

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int id;
        string name;
        double distance, rate;
        cin >> id >> name >> distance >> rate;
        Trip t(id, name, distance, rate);
        t.display();
    }

    return 0;
}
