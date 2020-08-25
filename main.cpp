#include <iostream>
using namespace std;

void cubeByReference(int*); //function prototype that takes a pointer

int main() {
    int number{5};

    cout << "The original value of number is " << number;

    cubeByReference(&number);

    cout << "\nThe new value of number is " << number << endl;
}

void cubeByReference(int* numberPointer) {
    *numberPointer = *numberPointer * *numberPointer * *numberPointer;
}
