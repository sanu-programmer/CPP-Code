#include<iostream>
using namespace std;

int main(){


    //do while loop 
    //Question 1 , print 1 to 5 
    int i =1; //initialise
    do{
        cout<<i<<endl;
        i++; //update

    }while(i<=5); //break

    //Question 2 , print sum of n number
    int sum = 0;
    i=1;
    do{
        sum = sum+i;
        cout<<sum<<endl;
        i++;
    }while(i<=10);


    //Concept of Break and continue  using while loop 
    // Question1 ,print 1 to 10 break if number == 4

    i =1;
    while(i<=10)
    {
        if(i==4)
        break;

        cout<<i<<endl;
        i++;
    }


    // Question 2 , print 1 to 10 i=using for loop if i%4 == 0 continue
    for(i=1 ; i <= 10 ; i++)
    {
        if(i%4 == 0)
        continue;

        cout<<i<<endl; 
    }


    // Switch concept 
    i = 2;
    switch(i)
    {
        case 1:
        cout<<"Sanu"<<" ";
        break;
        
        case 2:
        cout<<"Shivam"<<" ";
        break;

        default:
        cout<<"Som";
    }


    //Days of week program using switch statement
    cout<<"Enter the day: ";
    cin>>i;
    switch (i)
    {
    case 1:
        cout<<"Monday";/* code */
        break;

    case 2:
         cout<<"Tuesday";
         break;

    case 3:
         cout<<"Wednesday";
         break;

    case 4:
         cout<<"Thursday";
         break;

    case 5:
         cout<<"Friday";
         break;                  

    case 6:
         cout<<"Saturday";
         break;

    case 7:
         cout<<"Sunday";
         break;     
    
    default:
        cout<<"Invalid input";
        break;
    }
}