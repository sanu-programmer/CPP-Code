#include<iostream>
using namespace std;

int main(){

    // // Question 1 , print number from 100 to 200
    //  int a;
    //  cout<<"Enter the new Number";
    //  cin>>a;
    //  for(int i=100; i<=a; i=i+1)
    //  {
    //   cout<<i<<endl;
    //  }
    // // Question 2 , Print a to z
    //  char Alphabet;
    //  for(Alphabet='a'; Alphabet<='z'; Alphabet=Alphabet+1)
    //  {
    //   cout<<Alphabet<<endl;
    //  }
    // //Question 3, print number from 10 to 1
    //  int b,c;
    //  cout<<"Enter your backward number:";
    //  cin>>c;
    //  for(b=c; b>=1 ; b = b-1)
    //  {
    //   cout<<b<<endl;
    //  }
    // // Question 4, print 1,4,7,10,......n
    //  int d;
    //  cout<<"Enter the number up to which you wants to run this sequence:";
    //  cin>>d;
    //  for(int i = 1; i<= d; i = i+3)
    //  {
    //   cout<<i<<endl;
    //  }
    // //Question 5, print n , n*2 , n*3,.....n*10
    //  int e;
    //  cout<<"Enter the table:";
    //  cin>>e;
    //  for(int i=1; i<=10; i = i+1)
    //  {
    //   cout<<e<<"*"<<i<<"="<<i*e<<endl;

    //  }
    // //we can also print the same output with another code
    //  int f;
    //  cout<<"Enter the Table:";
    //  cin>>f;
    //  for(int i = f ;  i<= 10*f; i = i+f)
    //  {
    //   cout<<i<<endl;
    //  }
    // // Question 6, print the value of 6^5
    //  int num, pow,i ,v;
    //  cout<<"Enter the number";
    //  cin>>v;
    //  cout<<"Enter the power";
    //  cin>>pow;
    //  num=v;
    //  for(i=1; i<pow; i=i+1)
    //  {
    //   num= num*v;
    //  }
    //  cout<<num<<endl;

    // // Question 7, sum of n natural number.
    // int g ,sum ;
    // cout<<"Enter the value of g: ";
    // cin>>g;
    // sum =0;
    // for(i=1; i<=g; i = i+1)
    // {
    //   sum = sum+i;
    // }
    // cout<<sum<<endl;

    // //Question 8, sum of square of n natural number.
    // int h ,sum1;
    // cout<<"Enter the value of h: ";
    // cin>>h;
    // sum1 = 0;
    // for(i=1; i <= h; i= i+1)
    // {
    //     sum = sum+(i*i);
    // }
    // cout<<sum<<endl;
    
    // //Question 9, Factorial of a number. 
    // long int j ,Fact,i;
    // cout<<"Enter the Factorial: ";
    // cin>>j;
    // Fact = 1;
    // for(i=1; i<= j; i= i+1)
    // {
    //     Fact = Fact*i;
    // }
    // cout<<Fact<<endl;

    //Question 10 , Check whether the number is prime or not.
    // int k,i ;
    // cout<<"Enter the prime number: ";
    // cin>>k;
    // if(k<2)
    // {
    //     cout<<"It is not a Prime Number";
    //     return 0;
    // }
    // else
    // {
    //     for(i = 2; i<k; i = i+1)
    //     {
    //         if(k%i == 0)
    //         {
    //             cout<<"It is not a Prime Number";
    //             return 0;
    //         }
            
    //     }

    //     cout<<"It is a Prime Number "<<endl;
    //     return 0;
    // }

    //Question 11, Fabonacci Series.
    int curr , prev =1 , last =0 ,i , l;
    cout<<"Enter the Fabonacci Number: ";
    cin>>l;
    for(i =2 ; i<=l; i=i+1 )
    {
        curr = prev + last;
        last = prev;
        prev = curr;
    }
    cout<<curr<<endl;





    

}

