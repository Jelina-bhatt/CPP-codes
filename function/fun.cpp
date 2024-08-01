#include<iostream>
using namespace std;
int &fun (int &);
int &fun (int &x){
    x++;
    return (x);
}
int main(){
    int a=5;
    fun(a)=5;
    cout<<a<<endl;
    fun(a)= ++a;
    cout<<a<<endl;
    fun(a)=a++;
    cout<<a<<endl;
    return 0;

}