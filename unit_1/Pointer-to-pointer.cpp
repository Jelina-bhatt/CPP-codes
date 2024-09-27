#include <iostream>
using namespace std;

int main() {
    int var = 5;
    int* ptr;       // Pointer to integer
    int** ptr2;     // Pointer to pointer

    ptr = &var;     // Store the address of 'var'
    ptr2 = &ptr;    // Store the address of 'ptr'

    // Accessing value using the pointer to pointer
    cout << "Value of var: " << var << endl;
    cout << "Value using *ptr: " << *ptr << endl;
    cout << "Value using **ptr2: " << **ptr2 << endl;

    return 0;
}
