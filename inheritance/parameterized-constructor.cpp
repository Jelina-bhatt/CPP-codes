#include<iostream>
using namespace std;

class base{
    protected: int mark1, mark2;
    public: base(int a, int b)
    {
        mark1 = a;
        mark2 = b;
    }
};

class derived: public base{
    int total;
    public: derived() : base (9,8)
    {
        total = 0;
    }
    int calculate()
    {
        cout<<"total work ="<<mark1+mark2;
    }
};

int main()
{
    derived dl;
    dl.calculate();
    return 0;
}