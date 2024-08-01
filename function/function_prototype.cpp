#include<iostream>
#include<cstdarg>   //this header is used for function which uses ellipse
using namespace std;
int findmaximum (int count,...)
{
    int max,value;
    va_list list; // declare variable arg list
    va_start (list, count); // start accessing variable list
    max=va_arg(list,int); //extract the first element of list
    for (int arg = 1; arg< count; ++arg)
    {
       value =va_arg(list, int);  //extract each sucessive element from list
       if (max<value)
       {
        max=value;
       }
       
    }
    va_end(list); //end the access of the variable arg list
    return max;

}
int main(){
    cout<<findmaximum(4,14,15,12,10)<<endl;
    cout<<findmaximum(4,10,15,60,80)<<endl;
}