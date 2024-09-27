#include <iostream>
using namespace std;

class MyArray {
private:
    int arr[5];

public:
    MyArray() {
        for (int i = 0; i < 5; i++)
            arr[i] = i * 10;
    }

    // Overload [] operator
    int& operator[](int index) {
        if (index >= 0 && index < 5)
            return arr[index];
        else {
            cout << "Index out of bounds!" << endl;
            // Return a reference to an out-of-bounds location
            static int temp = -1;
            return temp;
        }
    }
};

int main() {
    MyArray myArr;
    cout << "Element at index 2: " << myArr[2] << endl;

    // Trying to access out of bounds
    cout << "Element at index 7: " << myArr[7] << endl;
    return 0;
}
