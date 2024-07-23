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


}