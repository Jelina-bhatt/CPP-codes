#include <iostream>
using namespace std;

class space {
    private:
    int x, y;

    public:
    // Default constructor
    space() {
        x = 0;
        y = 0;
    }

    // Parameterized constructor
    space(int a, int b);

    // Overload unary minus operator
    void operator-();

    // Function to display the values
    void display();
};

// Definition of parameterized constructor
space::space(int a, int b) {
    x = a;
    y = b;
    
}

// Definition of display function
void space::display() {
    cout << "x = " << x << ", y = " << y<< endl;
}

// Definition of unary minus operator overloading
void space::operator-() {
    x = -x;
    y = -y;
    }
   

int main() {
    space s1, s2(10, -7);
    
   
    cout << "s2 = ";
    s2.display();
    
    // Apply unary minus operator on s2
    -s2;
    
    // Display values after applying unary minus
    cout << "-s2 = ";
    s2.display();
    
    return 0;
}
