#include<iostream>
using namespace std;

int main(){

    //Question1 , print        *
                 //          * *
                 //        * * *
                 //      * * * *   
                 //    * * * * *
    int row , col ,col1 ;
    for(row = 1 ; row<= 5 ; row++)
    {
        for(col =(5-row) ; col>=1; col =col-1)
        {
            cout<<"  ";
        }
        for(col1 =1 ; col1 <= row ; col1++ )
        {
            cout<<"*"<<" ";
        }
        cout<<endl;                 
    }

    //Another method
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(row = 1 ; row<= n ; row++)
    {
        for(col=1 ; col <= n-row ;col = col +1  ) //space print
        {
            cout<<"  ";
        }
        for(col = 1 ; col <= row ; col = col+1)  // star print
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }


    // Question 2 , print     1
                 //         2 2
                 //       3 3 3
                 //     4 4 4 4
                 //   5 5 5 5 5 
    
    cout<<"Enter the number : ";
    cin>>n;
    for(row = 1 ; row<= n ; row++)
    {
        for(col=1 ; col <= n-row ;col = col +1  ) //space print
        {
            cout<<"  ";
        }
        for(col = 1 ; col <= row ; col = col+1)  
        {
            cout<<row<<" ";
        }
        cout<<endl;
    }

    //Question 3 , print       1
                 //          1 2
                 //        1 2 3
                 //      1 2 3 4 
                 //    1 2 3 4 5
    cout<<"Enter the number : ";
    cin>>n;
    for(row = 1 ; row<= n ; row++)
    {
        for(col=1 ; col <= n-row ;col = col +1  ) //space print
        {
            cout<<"  ";
        }
        for(col = 1 ; col <= row ; col = col+1)  
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }


    //Question 4 ,  print         A
                     //         A B 
                     //       A B C 
                     //     A B C D 
                     //   A B C D E
    cout<<"Enter the input : ";
    cin>>n;
    for(row = 1 ; row <= n ; row = row + 1)
    {
        for(col = 1 ; col <= (n-row) ; col++)
        {
            cout<<"  ";
        }
        for(col =1 ; col <=row ; col = col+1 )
        {
            char name = 'A' + (col-1);
            cout<<name<<" ";
        }
        cout<<endl;
    }

    //Question 5 , print   A
             //          B B
             //        C C C
             //      D D D D
             //    E E E E E
    cout<<"Enter the input : ";
    cin>>n;
    for(row = 1 ; row <= n ; row = row + 1)
    {
        for(col = 1 ; col <= (n-row) ; col++)
        {
            cout<<"  ";
        }
        for(col =1 ; col <=row ; col = col+1 )
        {
            char name = 'A' + (row-1);
            cout<<name<<" ";
        }
        cout<<endl;
    }         

    //Question 6 , print      1
                 //         2 1
                 //       3 2 1
                 //     4 3 2 1 
                 //   5 4 3 2 1 
    cout<<"Enter the input : ";
    cin>>n ;
    for(row = 1 ;row <=n ; row++)
    {
        for(col = 1 ; col <= (n-row) ; col++)
        {
            cout<<"  ";
        }
        for(col = row ; col>=1 ; col = col-1)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }

    // Question 7 , print           5
                         //       5 4
                         //     5 4 3
                         //   5 4 3 2 
                         // 5 4 3 2 1
    cout<<"Enter the input : ";
    cin>>n;
    for(row =1; row <= n ; row= row +1)
    {
        for(col =1 ; col<= (n-row) ; col = col+1)
        {
            cout<<"  ";
        }
        for(col=5 ; col>=5-(row-1) ; col=col-1)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }

    //Question 8 , print       E
                 //          E D
                 //        E D C
                 //      E D C B
                 //    E D C B A
    cout<<"Enter the input : ";
    cin>>n;
    for(row =1 ; row<= n; row++)
    {
        for(col=1 ; col<=(n-row) ; col= col+1)
        {
            cout<<"  ";
        }
        for(char name ='E' ; name>= 'E'-(row-1) ; name = name-1 )
        {
            cout<<name<<" ";
        }
        cout<<endl;
    }



}