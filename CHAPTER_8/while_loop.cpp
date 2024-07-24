#include<iostream>
using namespace std;

int main(){

    // while loop
    //Question 1 , print 1 to 10
    int i = 1;
    while(i<=10)
    {
        cout<<i<<" ";
        i++;
    }

    //Question 2 , print table
    int n;
    cout<<"Enter the table: ";
    cin>>n;
     i = 1;
    while(i<=10)
    {
        cout<<n*i<<endl;
        i++;
    }

    //Question 3 , print factor
    cout<<"Enter the number: ";
    cin>>n;
    i=1;
    while(i<=n)
    {
        if(n%i==0)
        {
            cout<<i<<endl;
        }
        i++;

    }
    

    //Question 4 , print even number 1 to n
    cout<<"Enter the number: ";
    cin>>n;
    i=1;
    while(i<=n)  //initialise
    {
        if(i%2==0)  //break
        {
            cout<<i<<endl;  //update
        }
        i++;

    }

    //Question 5 , print odd number 1 to n
    cout<<"Enter the number: ";
    cin>>n;
    i=1;
    while(i<=n)
    {
        if(i%2!=0)
        {
            cout<<i<<endl;
        }
        i++;

    }

    //Question 6 , print decimal in binary
    int num = 13;
    int rem , ans = 0 , mul = 1;
    while(num>0)
    {
        rem = num%2;
        num = num/2;
        ans = rem*mul+ans;
        mul = mul*10;
    }
    



}