#include <iostream>

int main() {
    int number;

    std::cout << "Enter an integer: ";
    std::cin >> number;

    if (number % 2 == 0) {  // Check if the number is even
        std::cout << number << " is even.";
    } else {  // If the number is not even, it is odd
        std::cout << number << " is odd.";
    }
    return 0;
}
