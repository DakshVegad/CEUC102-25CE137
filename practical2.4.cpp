#include <iostream>
#include <vector>
using namespace std;

class Item {
private:
    int id;
    string name;
    double price;
    int quantity;

public:
    Item() {
        id = 0;
        name = "Unknown";
        price = 0.0;
        quantity = 0;
    }

    Item(int i, string n, double p, int q) {
        id = i;
        name = n;
        price = p;
        quantity = q;
    }
    void addStock(int amount) {
        if (amount > 0) {
            quantity += amount;
        }
    }
    void sellItem(int amount) {
        if (amount <= quantity && amount > 0) {
            quantity -= amount;
            cout << "Sale successful!\n";
        } else {
            cout << "Insufficient stock!\n";
        }
    }
    void display() const {
        cout << "ID: " << id
             << ", Name: " << name
             << ", Price: ₹" << price
             << ", Quantity: " << quantity << endl;
    }
};

int main() {
    vector<Item> inventory;

    inventory.push_back(Item(1, "Laptop", 120000.00, 10));
    inventory.push_back(Item(2, "Phone", 80000.00, 20));

    cout << "Inventory:\n";
    for (const auto& item : inventory) {
        item.display();
    }

    cout << "\nAdding stock to Laptop...\n";
    inventory[0].addStock(5);

    cout << "\nSelling 3 Phones...\n";
    inventory[1].sellItem(3);

    cout << "\nUpdated Inventory:\n";
    for (const auto& item : inventory) {
        item.display();
    }

    return 0;
}