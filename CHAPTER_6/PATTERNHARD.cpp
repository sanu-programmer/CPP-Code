#include<iostream>
using namespace std;

int main(){

    //Question1 , print        *
                 //          * *
                 //        * * *
                 //      * * * *   
                 //    * * * * *
    int row , col ,col1 ;
    for(row=1 ; row<=5 ; row = row+1)
    {
        for(col =(5-row) ; col>=1; col =col-1)
        {
            cout<<" ";
        }
        for(col1 =1 ; col1 <= row ; col1++ )
        {
            cout<<"*";
        }
        cout<<endl;                 
    }
}