#include<iostream>
using namespace std;

inline int sum(int a, int b) { // Inline function definition
    return a + b;
}

int main() { //  main function signature
    int x, y, k;
    cout << "Enter two numbers: "; // Prompt the user for input
    cin >> x >> y; // Input two integers
    k = sum(x, y); // Call the inline sum function
    cout << "The sum is: " << k; // Output the result
    return 0; // Return an integer value
}