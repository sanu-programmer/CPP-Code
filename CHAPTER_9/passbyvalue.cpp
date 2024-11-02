#include<iostream>
using namespace std;

void swap(int a , int b) //pass by value
{
    int c;
    c=a;
    a=b;
    b=c;

}

int main(){
  //pass by value
  int a,b;
  cout<<"Enter the value of a and b:";
  cin>>a>>b;
  swap(a,b);
  cout<<a<<" "<<b<<" ";
}