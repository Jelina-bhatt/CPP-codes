# include<iostream>
using namespace std;
long fact(int n){
    if (n==0)
    {
      return 1;
    }
    else{
      return(n*fact(n-1));
    }
    
}
int main(){
    int num;
    cout<<"enter a positive number:";
    cin>>num;
    cout<<"factorial of"<<num<<"is"<<fact(num);
    return 0;
}