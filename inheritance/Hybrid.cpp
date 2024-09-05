#include <iostream>
using namespace std;

// Base class 1
class A {
public:
    void displayA() {
        cout << "Class A" << endl;
    }
};

// Base class 2
class B {
public:
    void displayB() {
        cout << "Class B" << endl;
    }
};

// Derived class C inheriting from class A
class C : public A {
public:
    void displayC() {
        cout << "Class C" << endl;
    }
};

// Derived class D inheriting from both class B and class C
class D : public B, public C {
public:
    void displayD() {
        cout << "Class D" << endl;
    }
};

int main() {
    D obj;
    obj.displayA(); // From class A
    obj.displayB(); // From class B
    obj.displayC(); // From class C
    obj.displayD(); // From class D

    return 0;
}
