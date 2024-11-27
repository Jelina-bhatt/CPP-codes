#include<iostream>
using namespace std;
template<class t>
t sum(t a, t b){
    t s=a+b;
    return s;
}
int add(int a, int b)
{
    return a+b;
}
int main(){
    int a=5,b=6;
    float c=2.3,d=6.6;
    cout<<"sum of a and b ="<<sum(a,b);
    cout<<"sum of c and d ="<<sum(c,d);
    return 0;

}