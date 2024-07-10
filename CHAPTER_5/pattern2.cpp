#include<iostream>
using namespace std;


int main(){

    //Question 1 , // print *
                        //  * *
                        //  * * *
                        //  * * * *
                        //  * * * * *
    int row , col;
    for(row=1 ; row<=5 ; row = row+1)
    {
        for(col =1 ; col<=row ; col = col+1)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    //Question2 , print 1
                     // 1 2
                     // 1 2 3 
                     // 1 2 3 4
                     // 1 2 3 4 5
    int row1 , col1;
    for(row1 =1 ; row1<=5 ; row1 = row1+1)
    {
        for(col1 = 1 ; col1 <= row1 ; col1 = col1+1)
        {
            cout<<col1<<" ";
        }
        cout<<endl;
    }

    //Question3 , print 1
                     // 2 2
                     // 3 3 3
                     // 4 4 4 4 
                     // 5 5 5 5 5
    int row2 , col2;
    for(row2 =1 ; row2<=5 ; row2 = row2+1)
    {
        for(col2 = 1 ; col2 <= row2 ; col2 = col2+1)
        {
            cout<<row2<<" ";
        }
        cout<<endl;
    }

    //Question4 ,print 1
                 //    2 1
                 //    3 2 1
                 //    4 3 2 1
                 //    5 4 3 2 1
    int row3 ,col3 ;
    for(row3 =1 ; row3<= 5 ; row3= row3+1)
    {
        for(col3=row3 ; col3>=1 ; col3= col3-1)
        {
            cout<<col3<<" ";
        }
        cout<<endl;
    }

    //Question5 , print a
                     // b b
                     // c c c
                     // d d d d 
                     // e e e e e
    int row4 , col4;
    for(row4 = 1 ; row4<=5 ; row4= row4+1)
    {
        for(col4 =1 ; col4<=row4 ; col4 = col4+1)
        {
            char  name = 'a' + (row4-1);
            cout<<name<<" ";
        }
        cout<<endl;
    }


    //Question6 , print * * * * *
                     // * * * *
                     // * * *
                     // * *
                     // * 
    int row5 , col5 ;
    for(row5 =5 ; row5 >= 1 ; row5 = row5 -1)
    {
        for(col5 =1 ; col5<=row5 ; col5 = col5+1)
        {
            cout<<"*"<<" ";

        }
        cout<<endl;
    } 

    //Another method
    int row6 , col6;
    for(row6 = 1 ; row6<=5 ; row6= row6+1)
    {
        for(col6 =1 ; col6<= 5-(row6-1) ; col6 = col6+1)
        {
          cout<<"*"<<" ";
        }
        cout<<endl;
    }


    //Question7 , print 1 2 3 4 5
                     // 1 2 3 4
                     // 1 2 3 
                     // 1 2 
                     // 1
    int row7 , col7 ;
    for(row7 =5 ; row7 >= 1 ; row7 = row7 -1)
    {
        for(col7 =1 ; col7<=row7 ; col7 = col7+1)
        {
            cout<<col7<<" ";

        }
        cout<<endl;
    }

    // Another method 
    int row8 , col8;
    for(row8 = 1 ; row8<=5 ; row8= row8+1)
    {
        for(col8 =1 ; col8<= 5-(row8-1) ; col8 = col8+1)
        {
          cout<<col8<<" ";
        }
        cout<<endl;
    }

    //Question8 , print 5
                     // 5 4 
                     // 5 4 3 
                     // 5 4 3 2
                     // 5 4 3 2 1
    int row9 , col9 ;
    for(row9 = 1 ; row9 <= 5 ; row9 = row9+1)
    {
        for(col9 =5 ; col9 >=5-(row9-1) ; col9 = col9-1)
        {
            cout<<col9<<" ";
        }
        cout<<endl;
    }                                 


    


}
