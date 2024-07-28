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

    // For n = 5 Specific , we can code this
    //Question 3 , print  * * * * * * * * *
                         // * * * * * * *
                         //   * * * * *
                         //     * * *
                         //       * 

    cout<<"Enter the input for n = 5 :";
    cin>>n;
    for(row = 5 ; row>=1 ; row = row-1)
    {
        for(col =1 ; col<= (9 - (2*row-1))/2 ; col++ )
        {
            cout<<"  ";
        }

        for(col =1 ; col<= (2*row-1) ; col++ )
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    //Another method for the above question
    // cout<<"Enter the input:";
    // cin>>n;
    // for(row =1 ; row<=1 ; row = row+1)
    // {
    //     for(col =1 ; col<=(row-1) ;col++ )
    //     {
    //         cout<<"  ";
    //     }
    //     for(col =1 ; col<= ; )
    //     {

    //     }
    // }



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
        for(col=1 ; col<= (2*n-2*row) ; col++)  //here 2n is written for general , for specific n = 4 , (8 -2*row) 
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


    //Question 7 , print    1    for n = 5
                 //       1 2 3
                 //     1 2 3 4 5
                 //   1 2 3 4 5 6 7
                 // 1 2 3 4 5 6 7 8 9

    cout<<"Enter the input: ";
    cin>>n;
    for(row =1 ; row<=n ; row++ )
    {
        for(col =1 ; col<=n-row ; col++ )
        {
            cout<<"  ";
        }
        for(col = 1 ; col<=row ; col++)
        {
            cout<<col<<" ";
        }
        for(col =row+1 ; col<=2*row-1 ; col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }

    //Question 8 , print         A
                     //        A B A
                     //      A B C B A
                     //    A B C D C B A
                     //  A B C D E D C B A
    cout<<"Enter the input: ";
    cin>>n;
    for(row =1 ; row<=n ; row++)
    {
        for(col =1 ; col<=n-row ; col++)
        {
            cout<<"  ";
        }
        for(col=1 ; col<=row ; col++)
        {
            char name = 'A' + (col-1);
            cout<<name<<" ";

        }
        for(col =row-1 ; col >=1 ; col = col-1 )
        {
           char name = 'A' + (col-1);
           cout<<name<<" "; 
        }
        cout<<endl;
    }                 
             



                         


                      
}