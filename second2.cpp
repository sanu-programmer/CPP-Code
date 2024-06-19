#include<iostream>
using namespace std;

int main(){
    // we will understand users input 
    int a, b;
    cin>>a>>b; // cin is used to get users input and ">>" is called extraction and "<<" is called insertion
     cout<<a+b<<endl;

    // we can also write this code to look attractive
     int x,y;
     cout<<"Enter your first number: ";
     cin>>x;
     cout<<"Enter your second number: ";
     cin>>y;
     cout<<"Sum of numbers: "<<x+y<<endl;

    // here "=" is assignment operator that assign values.
    // "==" this is comparision operator that gives output in binary only (yes or no , True or False , 1 or 0)
    
    // now we will understand Type casting {how to store one Data Type into another Data Type}
    // data loss occurs during type casting because different data type has different size{ like 4 byte/ 8 byte }
    int f = 66;
    char c = 'Z';
    f = c;
    cout<<f<<endl;
    c = f;
    cout<<c;


    return 0;

}