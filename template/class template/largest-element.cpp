#include <iostream>
using namespace std;

template <class t>
class array {
    t arr[5];  // Declare an array of fixed size
public:
    void get_array();
    t find_max();
};

template <class t>
void array<t>::get_array() {
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
}

template <class t>
t array<t>::find_max() {
    t max = arr[0];
    for (int i = 1; i < 5; i++) {  // Start from index 1
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;  // Return outside the loop
}

int main() {
    array<int> a1;
    cout << "Enter 5 integers: ";
    a1.get_array();
    cout << "The largest element is: " << a1.find_max() << endl;

    array<float> b1;
    cout << "Enter 5 floats: ";
    b1.get_array();
    cout << "The largest element is: " << b1.find_max() << endl;

    return 0;
}
