#include<iostream>
using namespace std;

class counter
{
    int count;
    public: counter()
    {
        count = 0;
    }
    void operator ++(int);
    void display()
    {
        cout<<"Count = "<<count<< endl;
    }
};

void counter:: operator ++(int)
{
    count ++;
}

int main()
{
    counter c;
    cout<<"Initial value of count= "<<endl;
    c.display();
    c++;
     c++;
      c++;
       c++;
    cout<<"After Increment c1 = "<<endl;
    c.display();
    cout<<"After Increment c2 = "<<endl;
    return 0;
}
