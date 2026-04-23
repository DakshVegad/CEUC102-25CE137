#include <iostream>
#include <string>
using namespace std;

long long digitSum(long long num) {
    if (num == 0)
        return 0;
    return (num % 10) + digitSum(num / 10);
}
int SDR(long long num) {
    if (num < 10)
        return num;
    
    return SDR(digitSum(num));  //SDR: super Digit recursive
}

int superDigit(string n, int k) {
    long long initialSum = 0;

    for (char c : n) {
        initialSum += (c - '0');
    }

    initialSum *= k;

    return SDR(initialSum);
}

int main() {
    string n;
    int k;

    cout<<"Enter Number: ";
    cin>>n;

    cout<<endl<<"Enter repeatation Number K: ";
    cin>>k;

    cout << "Super Digit: " << superDigit(n, k) << endl;
    return 0;
}