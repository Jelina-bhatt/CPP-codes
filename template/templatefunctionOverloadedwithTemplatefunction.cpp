#include<iostream>
using namespace std;
template<class t>
t sum(t a, t b){
    t s=a+b;
    return s;
}
template<class t1, class t2>
t1 sum(t1 a, t2 b){
    return a+b;
}
int main(){
    int a =2, b=5;
    float c=5.5;
    cout<<"the sum of a and b ="<<sum(a,b)<<endl;
    cout<<"the sum of b and c="<<sum(b,c);
    return 0;
}