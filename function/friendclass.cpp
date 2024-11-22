#include<iostream>
using namespace std;

class B;
class A
{
private:
    int x,y;
public:
  void enter(){
    cout<<"enter the value of x and y";
    cin>>x>>y;
  }
  friend class B;
};
class B{
    public:void display(A k){
        cout<<"x="<<k.x<<endl;
        cout<<"y="<<k.y<<endl;
    }
};
 int main(){
    A obj1;
    B obj2;
    obj1.enter();
    obj2.display(obj1);
    return 0;

 }
