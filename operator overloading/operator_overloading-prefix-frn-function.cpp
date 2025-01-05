#include<iostream>
using namespace std;

class counter
{
    int count;
    public: counter()
    {
        count = 0;
    }
    friend void operator++(counter &);
    void display()
    {
        cout<<"Count = "<<count<< endl;
    }
};

void operator++(counter &c)
{
    c.count ++;
}

int main()
{
    counter c1,c2;
    cout<<"Initial value of c1= "<<endl;
    c1.display();
     cout<<"Initial value of c2= "<<endl;
     c2.display();
    ++c1;
    ++c2;
    ++c2;
      ++c2;
    ++c2;
    cout<<"After Increment c1 = "<<endl;
    c1.display();
    cout<<"After Increment c2 = "<<endl;
    c2.display();
    return 0;
}
