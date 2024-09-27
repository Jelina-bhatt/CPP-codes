#include<iostream>
using namespace std;

// Function to calculate factorial
int factorial(int n) {
    if(n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Call the factorial function
    int fact = factorial(num);
    cout << "The factorial of " << num << " is: " << fact << endl;

    return 0;
}
