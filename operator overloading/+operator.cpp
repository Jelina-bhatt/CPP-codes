#include <iostream>
using namespace std;

class Complex {
private:
    float real, imag;

public:
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    // Overload + operator
    Complex operator+(const Complex &obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3.4, 2.1), c2(1.3, 5.7);
    Complex c3 = c1 + c2;

    c3.display();
    return 0;
}
