#include <iostream>
using namespace std;

int main() {
    int arr[3] = {10, 20, 30};  // Declare an array of integers
    int* ptr = arr;             // Point to the first element of the array

    for (int i = 0; i < 3; i++) {
        cout << "Address of arr[" << i << "]: " << (ptr + i) << endl;
        cout << "Value of arr[" << i << "]: " << *(ptr + i) << endl; // Pointer arithmetic
    }

    return 0;
}
