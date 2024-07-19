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
    cout<<"Enter the input: ";
    cin>>n;
    for(row = 1 ; row<=n ; row++)
    {
        for(col=1 ; col<=(n-row) ; col++)
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

    //Question 3 , print  * * * * * * * * *
                         // * * * * * * *
                         //   * * * * *
                         //     * * *
                         //       * 
    cout<<"Enter the input: ";
    cin>>n;
    for(row=n ; row>=1 ; row = row-1)
    {
        for(col=1 ;col<= n-row ; col++)            // ((2*n-1) -(2*row-1))/2 = n-row
        {
            cout<<"  ";
        }
        for(col=1 ; col<=(2*row-1) ; col++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;  
    }

    //Question 4 , print  * * * * * * * *     for n = 4
                     //   * * *     * * *
                     //   * *         * *
                     //   *             *
                     //   *             *
                     //   * *         * *
                     //   * * *     * * *
                     //   * * * * * * * *
    cout<<"Enter the input : ";
    cin>>n;                 
    for(row =n ; row>=1 ; row =row -1 )
    {
        for(col = 1 ; col<= row ; col++)
        {
            cout<<"*"<<" ";
        }
        for(col=1 ; col<= (2*n-2*row) ; col++)
        {
            cout<<"  ";
        }
        for(col = 1 ; col<= row ; col++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    for(row =1 ; row<=n ; row++) 
    {
       for(col = 1 ; col<= row ; col++)
        {
            cout<<"*"<<" ";
        }
        for(col=1 ; col<= (2*n-2*row) ; col++)
        {
            cout<<"  ";
        }
        for(col = 1 ; col<= row ; col++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl; 
    }


    // Question 5 , print  *             *   for n = 4
                     //    * *         * *
                     //    * * *     * * *
                     //    * * * * * * * *
                     //    * * *     * * *
                     //    * *         * *
                     //    *             *
    cout<<"Enter the input : ";
    cin>>n;                 
    for(row = 1 ; row <=n ; row++)
    {
        for(col=1 ; col<=row ; col++ )
        {
            cout<<"*"<<" ";
        }
        for(col=1 ; col<= (2*n-2*row) ; col++)
        {
            cout<<"  ";
        }
        for(col=1; col<=row ; col++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    for(row= n-1 ; row>=1 ; row=row-1)
    {
        for(col=1 ; col<=row ; col++ )
        {
            cout<<"*"<<" ";
        }
        for(col=1 ; col<= (2*n-2*row) ; col++)
        {
            cout<<"  ";
        }
        for(col=1; col<=row ; col++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    //Question 6 , print       *
                         //   * *
                         //  * * *
                         // * * * *
                         // * * * * 
                         //  * * *
                         //   * *
                         //    * 
    cout<<"Enter the input: ";
    cin>>n;                     
    for(row =1 ; row<= n ; row++)
    {
        for(col=1 ; col<=n-row ;col++)
        {
            cout<<" ";
        }
        for(col=1 ; col<=row ; col++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    for(row=n ; row>=1 ; row = row-1)
    {
        for(col=1 ; col<=n-row ;col++)
        {
            cout<<" ";
        }
        for(col=1 ; col<=row ; col++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }


                         


                      
}