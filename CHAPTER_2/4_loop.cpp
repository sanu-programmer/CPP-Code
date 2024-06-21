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
}