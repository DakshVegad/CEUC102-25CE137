#include<iostream>
using namespace std;

class dynamicArr{
private:

int *arr;
int size;
int capacity;

void resize(){

    capacity *= 2;
    int *newArr = new int [capacity];

    for (int i=0;i<size;i++){

        newArr[i]=arr[i];
    }

    delete[] arr;
    arr= newArr;

}

public:

dynamicArr( int cap = 2){
   capacity = cap;
   size = 0;
   arr= new int[capacity];
}

~dynamicArr(){

    delete[] arr;
}
void insert(int value) {
        if (size == capacity) {
            resize();
        }
        arr[size++] = value;
    }

    void remove(int pos) {
        if (pos < 0 || pos >= size) {
            cout << "Invalid position!" << endl;
            return;
        }

        for (int i = pos; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }

        size--;
    }

      void display() {
        if (size == 0) {
            cout << "Array is empty." << endl;
            return;
        }

        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }


};
int main() {
    dynamicArr da;

    da.insert(10);
    da.insert(20);
    da.insert(30);
    da.insert(40);

    cout << "Array after insertion: ";
    da.display();

    da.remove(1); 

    cout << "Array after deletion: ";
    da.display();

    return 0;
}