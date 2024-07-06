#include<iostream>
using namespace std;
int main(){
   //Question 1
     int package;
     cout<<"Tell Me Your Expected Packages : ";
     cin>>package;

     if(package>10)
     {
         cout<<"accepted"<<endl;
     }
     else
     {
         cout<<"Rejected"<<endl;
     }
    //Question 2
    int marks;
    cout<<"Enter Your Marks : ";
    cin>>marks;
    cout<<"You are ";
    if(marks>33)
     cout<<"Pass"<<endl; // if there is only one line after if and else statement then there is no need of curlie braces , we can simply write it without curlie braces
    else
     cout<<"Fail"<<endl;
     // Question 3,  if a>b
     int a,b;
     cout<<"Enter the value of a:";
     cin>>a;
     cout<<"Enter the value of b:";
     cin>>b;
     if(a>b)
     cout<<"yes"<<endl;
     else
     cout<<"No"<<endl;
    // Question 4, even or odd
    int number;
    cout<<"Enter the Number:";
    cin>>number;
    if(number%2==0)
   {
      cout<<"Even"<<endl;
   } 
    else
    {
        cout<<"Odd"<<endl;
    }
      // Question 5 , if age is greater than 18 print Adult else Teenager
      int Age;
      cout<<"Enter Your Age:";
      cin>>Age;
      cout<<"You are ";
       if(Age>18)
       {
        cout<<"Adult"<<endl;
       }
       else
       {
        cout<<"Teenager"<<endl;
       }
       // Question 6, print if anumber is positive , negative , or zero
       int number1;
       cout<<"Enter the number:";
       cin>>number1;
       if(number1>0)
       {
        cout<<"Positive"<<endl;
       }
       else if (number1==0)
       {
        cout<<"0"<<endl;
       }
       else
       {
        cout<<"Negative"<<endl;
       }
       // Question 7 , print if alphabet is vowel or consonant
       char A;
       cout<<"Enter the Alphabet: ";
       cin>>A;
       if(A=='a')
       cout<<"Vowel"<<endl;
       else if (A== 'e')
       cout<<"Vowel"<<endl;
       else if (A=='i')
       cout<<"Vowel"<<endl;
       else if (A=='o')
       cout<<"Vowel"<<endl;
       else if (A=='u')
       cout<<"Vowel"<<endl;
       else if (A=='A')
       cout<<"Vowel"<<endl;
       else if (A=='E')
       cout<<"Vowel"<<endl;
       else if (A=='I')
       cout<<"Vowel"<<endl;
       else if (A=='O')
       cout<<"Vowel"<<endl;
       else if (A=='U')
       cout<<"Vowel"<<endl;
       else
       cout<<"Consonant"<<endl;
       // Question 8,print the days of week as per given numbering of days
       int n; //n = no. of days
       cout<<"Enter the Days of Week: ";
       cin>>n;
       if(n== 1)
       cout<<"Monday";
       else if (n== 2)
       cout<<"Tuesday";
       else if(n== 3)
       cout<<"Wednesday";
       else if (n== 4)
       cout<<"Thursday";
       else if(n== 5)
       cout<<"Friday";
       else if (n== 6)
       cout<<"Saturday";
       else if(n== 7)
       cout<<"Sunday";
       else
       cout<<"You Entered Invalid date Please Enter a valid date";




       

       

    
}