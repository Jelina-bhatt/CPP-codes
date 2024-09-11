#include <iostream>
using namespace std;

// Defining a class called 'Car'
class Car {
    // Private data members (not accessible outside the class)
    private:
        string brand;
        string model;
        int year;

    // Public methods (accessible outside the class)
    public:
        // Constructor to initialize the Car object
        Car(string b, string m, int y) {
            brand = b;
            model = m;
            year = y;
        }

        // Method to display car information
        void displayInfo() {
            cout << "Car Brand: " << brand << endl;
            cout << "Car Model: " << model << endl;
            cout << "Manufacturing Year: " << year << endl;
        }

        // Setter method to modify the car model
        void setModel(string m) {
            model = m;
        }

        // Getter method to retrieve the car model
        string getModel() {
            return model;
        }
};

int main() {
    // Creating a Car object
    Car car1("Toyota", "Corolla", 2020);

    // Accessing the displayInfo method
    car1.displayInfo();

    // Modifying and retrieving the car model using setter and getter
    car1.setModel("Camry");
    cout << "Updated Car Model: " << car1.getModel() << endl;

    return 0;
}
