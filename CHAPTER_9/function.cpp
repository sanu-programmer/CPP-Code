#include<iostream>
using namespace std;

int sum(int m , int n) //function declare
{
     int ans = m+n;  //function define
     return ans;
}
int multiply(int x=3 , int y =4) //default parameter
{
    int ans1 = x*y;
    return ans1;
}

bool prime(int n ){
    if(n<2)
    return 0;

    for(int i = 2 ; i<n ; i++)
    {
        if(n%i == 0)
        return 0;
    }
    return 1;
}

int fact(int n ){
    int ans =1;
    for(int i=1; i<n; i++)
    {
        ans=ans*i;
    }
    return ans;

}


int main(){

  int a, b;
  cout<<"Enter 2 number: ";
  cin>>a>>b;
  cout<<"sum of a and b is"<<sum(a,b)<<endl; //function call
  cout<<prime(a)<<endl;
  cout<<prime(b)<<endl;
  cout<<prime(b-a)<<endl;
  cout<<fact(a)<<endl;
  cout<<fact(b)<<endl;
  cout<<fact(b-a)<<endl;
  cout<<multiply();


  // Default parameter 
  // while calling the function , if we dont provide any parameter then we need to assign a value of parameter uring function declaration.
  
  



}