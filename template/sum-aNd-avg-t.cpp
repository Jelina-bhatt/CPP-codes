#include<iostream>
using namespace std;
template<class T1, class T2>
void calc(T1 a[], int size, T2& sum, T2&avg){
    for (int i = 0; i < size; i++)
    {
     sum+=a[i];
     }
     avg=sum/size;
}
int main(){
    int a[]={1,2,3,4,5} ;
    float avg=0.0 ,sum =0 ;
 calc(a,5,sum,avg);
cout<<"sum="<<sum<<"and avg="<<avg<<endl;
float b[]={0.0,1.1,2.3,4.5,6.6};
 float sb= 0.0, ab= 0.0;
calc(b,5,sum,ab);
cout<<"sum ="<<sb<<"and avg="<<ab;
return 0;
}