#include<iostream>
using namespace std;
inline add (int p,int q){
    return p+q;
}
int main(){
    int p,q,r;
    cout<<"enter the values of p and q:"<<endl;
    cin>>p>>q;
    r=add(p,q);
    cout<<"the sum is ="<<r;
    return 0;
}