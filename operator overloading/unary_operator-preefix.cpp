#include<iostream>
using namespace std;

class counter
{
    int count;
    public: counter()
    {
        count = 0;
    }
    void operator ++();
    void display()
    {
        cout<<"Count = "<<count<< endl;
    }
};

void counter:: operator ++()
{
    count ++;
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
