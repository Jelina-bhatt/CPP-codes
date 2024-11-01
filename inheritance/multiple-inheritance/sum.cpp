#include<iostream>
using namespace std;

class one
{
    protected: int x;
    public: void display1()
    {
        cout<<"X = "<<x;
    }
};

class two
{
    protected: int y;
    public: void display2()
    {
        cout<<"Y = "<<y;
    }
};

class three : public one , public two
{
    int z;
    public: void enter()
    {
        cout<<"enter the values of x and y";
        cin>>x>>y;
    }

    void display3()
    {
        z = x+y;
        cout<<"\n Z = "<<z;
    }
};
int main()
{
    three obj;
    obj.enter();
    obj.display1();
    obj.display2();
    obj.display3();
    return 0;
}
