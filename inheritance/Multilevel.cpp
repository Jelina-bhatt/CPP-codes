#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "This animal eats food." << endl;
    }
};

// Derived class (inherits from Animal)
class Mammal : public Animal {
public:
    void breathe() {
        cout << "This mammal breathes air." << endl;
    }
};

// Further derived class (inherits from Mammal)
class Dog : public Mammal {
public:
    void bark() {
        cout << "The dog barks." << endl;
    }
};

int main() {
    Dog myDog;

    // Accessing methods from all levels of inheritance
    myDog.eat();      // Inherited from Animal
    myDog.breathe();  // Inherited from Mammal
    myDog.bark();     // Defined in Dog

    return 0;
}
