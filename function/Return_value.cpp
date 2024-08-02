#include <iostream>
using namespace std;

// Function declaration
int multiply(int a, int b) {
    return a * b;
}

int main() {
    int result = multiply(4, 5);
    cout << "Product: " << result << endl;
    return 0;
}
