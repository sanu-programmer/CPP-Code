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

    //Question 6 , print  decimal to  binary
    cout<<"Enter the decimal number : ";
    int num ;
    cin>>num;
    int rem , ans = 0 , mul = 1;
    while(num>0)
    {   
        //reminder
        rem = num%2;  //rem = num%2;
        //Quotient
        num /= 2;  //num = num/2;
        //answer
        ans += rem*mul;  //ans = rem*mul+ans;
        // update miltiplier
        mul *= 10;    //mul = mul* 10;
    }
    cout<<ans<<endl;
    

    //Question 7 , print binary to decimal 
    cout<<"Enter the binary number: ";
    cin>>num;
    num;
    rem , ans = 0 , mul =1;
    while(num>0)
    {   
        //remainder 
        rem = num%10;
        num /= 10;
        ans += rem*mul;
        mul *= 2;
    }
    cout<<ans<<endl;

    



}