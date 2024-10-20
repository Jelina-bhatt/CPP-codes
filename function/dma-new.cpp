#include <iostream>  // Including the Input/Output Stream Library

class MyClass {  // Declaration of a class named MyClass
public:
  void displayMessage() {  // Public member function within the class MyClass
    std::cout << "Dynamic object!" << std::endl;  // Outputting a message
  }
};

int main() {
  // Create a dynamic object of MyClass
  MyClass * dynamicObject = new MyClass;  // Dynamically allocating memory for an object of type MyClass

  // Call the member function of the dynamic object
  dynamicObject -> displayMessage();  // Accessing the member function of the dynamically created object using the pointer to the object

  // Deallocate the dynamic object
  delete dynamicObject;  // Deallocating the memory occupied by the dynamic object

  return 0;  // Returning 0 to indicate successful execution of the program
}