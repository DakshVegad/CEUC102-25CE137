#include <iostream>
using namespace std;

template <typename T>
void display(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

template <typename T>
T findMax(T arr[], int size) {
    T max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

template <typename T>
void reverseArr(T arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        swap(arr[i], arr[size - i - 1]);
    }
}

template <typename T>
void findLeaders(T arr[], int size) {
    T maxRight = arr[size - 1];
    cout << "Leaders: " << maxRight << " ";

    for (int i = size - 2; i >= 0; i--) {
        if (arr[i] > maxRight) {
            maxRight = arr[i];
            cout << maxRight << " ";
        }
    }
    cout << endl;
}

int main() {

    int intArr[] = {52, 56, 29, 87, 67, 45};
    int n = 6;

    cout << "Integer Array: ";
    display(intArr, n);

    cout << "Max: " << findMax(intArr, n) << endl;

    findLeaders(intArr, n);

    reverseArr(intArr, n);
    cout << "Reversed: ";
    display(intArr, n);

    float floatArr[] = {7.1, 2.5, 9.2, 5.9};
    int fSize = 4;

    cout << "\nFloat Array: ";
    display(floatArr, fSize);

    cout << "Max: " << findMax(floatArr, fSize) << endl;

    findLeaders(floatArr, fSize);

    char charArr[] = {'d', 'f', 'r', 's'};
    int cSize = 4;

    cout << "\nCharacter Array: ";
    display(charArr, cSize);

    cout << "Max: " << findMax(charArr, cSize) << endl;

    findLeaders(charArr, cSize);

    return 0;
}