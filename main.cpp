#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main() {

    int num[10] = {20,21,22,23,24,25,26,27,28,29};


    // Make a for loop that uses the pointer num and prints all numbers in the array
    for (int i=0; i<10;i++){
        cout << *(num+i) << endl;
    }


    /*

    int a = 10;
    int* b = &a;
    int** c = &b;

    cout << a << endl;
    cout << &a << endl;
    cout << b << endl;
    cout << &b << endl;
    cout << c << endl;
    cout << &c << endl;

    cout << *b << endl;
    cout << **c << endl;

    */

    /*

    int a = 10;
    int* b = &a;

    cout << a << endl;  // prints 10
    cout << &a << endl; // prints address of a
    cout << b << endl;   // prints address of a
    cout << *b << endl;  // prints 10

    */

    return 0;
}