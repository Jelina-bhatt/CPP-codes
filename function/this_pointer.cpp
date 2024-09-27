#include <iostream>

class MyClass {
private:
    int value;

public:
    // Constructor to initialize the value
    MyClass(int value) {
        // Use 'this' pointer to refer to the member variable 'value'
        this->value = value;
    }

    // A method to set the value
    MyClass& setValue(int value) {
        // Use 'this' pointer to distinguish between the member variable and the parameter
        this->value = value;
        return *this; // Return the current object for method chaining
    }

    // A method to display the value
    void display() {
        // 'this' pointer can also be used to access member functions
        std::cout << "Value: " << this->value << std::endl;
    }

    // A method that returns the current object using the 'this' pointer
    MyClass& getThis() {
        return *this;
    }
};

int main() {
    MyClass obj(10);
    obj.display(); // Output: Value: 10

    obj.setValue(20);
    obj.display(); // Output: Value: 20

    // Using 'this' pointer to return the object and chain methods
    obj.getThis().setValue(30).display(); // Output: Value: 30

    return 0;
}
