#include<iostream>
using namespace std;

int main(){

    // Question 1 , print number from 100 to 200
     int p;
     cout<<"Enter the new Number";
     cin>>p;
     for(int i=100; i<=p; i=i+1)
     {
      cout<<i<<endl;
     }
    // Question 2 , Print a to z
     char Alphabet;
     for(Alphabet='a'; Alphabet<='z'; Alphabet=Alphabet+1)
     {
      cout<<Alphabet<<endl;
     }
    //Question 3, print number from 10 to 1
     int q,s;
     cout<<"Enter your backward number:";
     cin>>s;
     for(q=s; q>=1 ; q = q-1)
     {
      cout<<q<<endl;
     }
    // Question 4, print 1,4,7,10,......n
     int r;
     cout<<"Enter the number up to which you wants to run this sequence:";
     cin>>r;
     for(int i = 1; i<= r; i = i+3)
     {
      cout<<i<<endl;
     }
    //Question 5, print n , n*2 , n*3,.....n*10
     int t;
     cout<<"Enter the table:";
     cin>>t;
     for(int i=1; i<=10; i = i+1)
     {
      cout<<t<<"*"<<i<<"="<<i*t<<endl;

     }
    //we can also print the same output with another code
     int u;
     cout<<"Enter the Table:";
     cin>>u;
     for(int i = u ;  i<= 10*u; i = i+u)
     {
      cout<<i<<endl;
     }
    // Question 6, print the value of 6^5
     int num, pow,i ,v;
     cout<<"Enter the number";
     cin>>v;
     cout<<"Enter the power";
     cin>>pow;
     num=v;
     for(i=1; i<pow; i=i+1)
     {
      num= num*v;
     }
     cout<<num<<endl;


}

