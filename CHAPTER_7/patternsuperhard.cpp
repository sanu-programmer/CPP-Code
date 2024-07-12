#include<iostream>
using namespace std;


int main(){

    //Question 1, print       *
                 //         * * *
                 //       * * * * *
                 //     * * * * * * *
                 //   * * * * * * * * *
    int col , row ,n ;
    cout<<"Enter the input: ";
    cin>>n;
    for(row =1 ; row<= n ; row++)
    {
        for(col=1 ; col<= (n-row) ;col++)
        {
            cout<<"  ";
        }
        for(col=1 ; col<= 2*row-1 ; col++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    //Question 2 , print        1
                     //       1 2 1
                     //     1 2 3 2 1 
                     //   1 2 3 4 3 2 1
                     // 1 2 3 4 5 4 3 2 1
    for(row = 1 ; row<=5 ; row++)
    {
        for(col=1 ; col<=(5-row) ; col++)
        {
            cout<<"  ";
        }
        for(col=1 ; col<=row ; col++)
        {
            cout<<col<<" ";
        }
        for(col=row-1 ; col>=1 ; col=col-1)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }

    //Question 3 , print                  

                      
}