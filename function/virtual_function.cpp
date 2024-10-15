// C++ Program to Demonstrate the Concept of Dynamic binding
// with the help of virtual function

#include <iostream>
using namespace std;

class GFG
{
  public:
    // using "virtual" for the display function
    virtual void print()
    {
        cout << "Printing the Base class Content" << endl;
    }
    // function that calls print
    void call_Function()
    {
        print();
    }
};
// GFG2 inherits publicly from GFG
class GFG2 : public GFG
{
  public:
    // GFG2's display
    void print() override
    {
        cout << "Printing the Derived class Content" << endl;
    }
};

int main()
{
    // Creating GFG's object using pointer
    GFG *geeksforgeeks = new GFG();
    // Calling call_Function
    geeksforgeeks->call_Function();

    // creating GFG2 object using pointer
    GFG *geeksforgeeks2 = new GFG2();
    // calling call_Function for GFG2 object
    geeksforgeeks2->call_Function();

    delete geeksforgeeks;
    delete geeksforgeeks2;

    return 0;
}