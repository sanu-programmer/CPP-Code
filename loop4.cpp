#include<iostream>
using namespace std;

int main(){
    //Question 1 , print Hello world 50 times
    int k;
    cout<<"Enter the number:";
    cin>>k;
    for(int i = 1; i<=k;i=i+1)  // here "i"=1 initialising point and "i<51" is break
    {                      
        cout<<"Hello world"<<endl;
    }

    // Question 2 , print natural number upto 20
    int l;
    cout<<"Enter the Number upto which you wants to count: ";
    cin>>l;
    for(int j=1 ; j<=l; j=j+1)
    {
       cout<<j<<endl;   // loop goes from j<n to cout<<j then j = j+1 and repeat this again.
    }

//      // Question 3 , print square of number upto 15
     int n;
     cout<<"Enter the number:";
     cin>>n;
     for (int square =1;square<=n;square=square+1)
     {
        cout<<square<<" square =  "<< square*square<<endl;
     }
     // Question 4 , print n even number
     int m;
     cout<<"Enter the even number:";
     cin>>m;
     for(int even=2;even<=m; even=even+2)
     {
        cout<<even<<endl;
     }
//      // we can do same que with another logic using if else and loop simultaneously
     int o;
     cout<<"Enter the number";
     cin>>o;
     for(int even=1;even<=o;even=even+1)
     {
        if(even%2==0)
        {
            cout<<even<<endl;
        }
        else
        {
            
        }
     } 
//      // Question 5 , print number from 100 to 200
     int p;
     cout<<"Enter the new Number";
     cin>>p;
     for(int i=100; i<=p; i=i+1)
     {
      cout<<i<<endl;
     }
     // Question 6 , Print a to z
     char Alphabet;
     for(Alphabet='a'; Alphabet<='z'; Alphabet=Alphabet+1)
     {
      cout<<Alphabet<<endl;
     }
//      //Question 7, print number from 10 to 1
     int q,s;
     cout<<"Enter your backward number:";
     cin>>s;
     for(q=s; q>=1 ; q = q-1)
     {
      cout<<q<<endl;
     }
//      // Question 8, print 1,4,7,10,......n
     int r;
     cout<<"Enter the number up to which you wants to run this sequence:";
     cin>>r;
     for(int i = 1; i<= r; i = i+3)
     {
      cout<<i<<endl;
     }
//      //Question 9, print n , n*2 , n*3,.....n*10
     int t;
     cout<<"Enter the table:";
     cin>>t;
     for(int i=1; i<=10; i = i+1)
     {
      cout<<t<<"*"<<i<<"="<<i*t<<endl;

     }
//      //we can also print the same output with another code
     int u;
     cout<<"Enter the Table:";
     cin>>u;
     for(int i = u ;  i<= 10*u; i = i+u)
     {
      cout<<i<<endl;
     }
//      // Question 10, print the value of 6^5
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