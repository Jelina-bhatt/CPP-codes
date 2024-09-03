#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "This animal is eating." << endl;
    }
};

// Derived class inheriting from the base class
class Dog : public Animal {
public:
    void bark() {
        cout << "The dog is barking." << endl;
    }
};

int main() {
    Dog myDog;
    
    // Accessing the method from the base class
    myDog.eat();
    
    // Accessing the method from the derived class
    myDog.bark();
    
    return 0;
}
