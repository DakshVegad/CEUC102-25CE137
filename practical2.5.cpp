#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Loan {
private:
    int loanID;
    string name;
    double amount;
    double rate;
    int tenure;

public:
    Loan() {
        loanID = 0;
        name = "N/A";
        amount = 0;
        rate = 0;
        tenure = 0;
    }

    Loan(int id, string n, double a, double r, int t) {
        loanID = id;
        name = n;
        amount = a;
        rate = r;
        tenure = t;
    }

    double calculateEMI() {
        double monthlyRate = rate / (12 * 100);
        double emi = (amount * monthlyRate * pow(1 + monthlyRate, tenure)) /
                     (pow(1 + monthlyRate, tenure) - 1);
        return emi;
    }

    void display() {
        cout << "Loan ID: " << loanID << endl;
        cout << "Name: " << name << endl;
        cout << "Amount: " << amount << endl;
        cout << "Interest Rate: " << rate << "%" << endl;
        cout << "Tenure: " << tenure << " months" << endl;
        cout << "Monthly EMI: " << calculateEMI() << endl;
        cout << "----------------------" << endl;
    }
};

int main() {
    vector<Loan> loans;

    loans.push_back(Loan(1, "xyz", 100000, 10, 12));
    loans.push_back(Loan(2, "abc", 200000, 8, 24));

    for (int i = 0; i < loans.size(); i++) {
        loans[i].display();
    }

    return 0;
}