#include<iostream>
using namespace std;

// Base class
class Vehicle {
public:
    void start() {
        cout << "Vehicle is starting." << endl;
    }
};

// Derived class
class Car : public Vehicle {
public:
    void drive() {
        cout << "Car is driving." << endl;
    }
};

// Further Derived class
class SportsCar : public Car {
public:
    void race() {
        cout << "SportsCar is racing." << endl;
    }
};

int main() {
    SportsCar sc;
    sc.start(); // Inherited from Vehicle
    sc.drive(); // Inherited from Car
    sc.race();  // Defined in SportsCar
    return 0;
}
