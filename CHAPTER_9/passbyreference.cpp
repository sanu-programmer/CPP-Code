#include<iostream>
using namespace std;

void swap(int &a , int &b) //pass by reference
{
    int c;
    c=a;
    a=b;
    b=c;

}

void swap(float &c , float &d)  // function overloading
{
    float r =c;
    c = d;
    d = r;
}

int main(){
  //pass by reference
  int a,b;
  cout <<"Enter the value of a and b:";
  cin>>a>>b;
  swap(a,b);
  cout<<a<<" "<<b<<" "<<endl;
  float f1 = 4.7 , f2 = 6.8; 
  swap(f1, f2);
  cout<<f1<<" "<<f2;
}