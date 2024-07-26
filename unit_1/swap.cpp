#include<iostream>
using namespace std;
int swap(int &,int &);
int main(){
    int x,y;
    cout<<"enter the value of x and y:";
    cin>>x>>y;
    swap(x,y);
    cout<<"the value after swapping is :"<<x<<endl<<y;
}
int swap(int &a,int&b)
{
   int t;
    t=a;
    a=b;
    b=t;

}