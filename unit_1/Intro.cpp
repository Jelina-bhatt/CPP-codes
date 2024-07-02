#include <iostream>
#include <string>

int main() {
    // Declare variables
    std::string name;
    int age;

    // Prompt user for their name
    std::cout << "Enter your name: ";
    std::getline(std::cin, name); // Read a line of text from the user

    // Prompt user for their age
    std::cout << "Enter your age: ";
    std::cin >> age; // Read an integer from the user

    // Display a message
    std::cout << "Hello, " << name << "! You are " << age << " years old." << std::endl;

    return 0; // Indicate that the program ended successfully
}
