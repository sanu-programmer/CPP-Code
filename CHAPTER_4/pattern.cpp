#include<iostream>
using namespace std;

int main(){
    //Pattern Printing 
    //Question 1, print star in a row and in column as well like square.
    int a, b, row, coln;
    cout<<"Enter the number of row : ";
    cin>>a; //5
    cout<<"Enter the number of coln : ";
    cin>>b; //5
    for(row=1; row<=a; row++) //Nested LOOP
    {
        for(coln=1; coln<=b ; coln++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    //Question 2, print 10 in four row and five coln
    int c, d, row1, coln1;
    cout<<"Enter the number of row : ";
    cin>>c; //4
    cout<<"Enter the number of coln : ";
    cin>>d; //5
    for(row1=1; row1<=c; row1++)
    {
        for(coln1=1; coln1<=d ; coln1++)
        {
            cout<<"10"<<" ";
        }
        cout<<endl;
    }

    // Question3 ,print 1 1 1 1 1
    //                  2 2 2 2 2
    //                  3 3 3 3 3
    //                  4 4 4 4 4
    //                  5 5 5 5 5
    int e, f, row2, coln2;
    cout<<"Enter the number of row : ";
    cin>>e;
    cout<<"Enter the number of coln : ";
    cin>>f;
    for(row2=1; row2<=e; row2++)
    {
        for(coln2=1; coln2<=f ; coln2++)
        {
            cout<<row2<<" ";
        }
        cout<<endl;
    }

    //Question 4, print 1 2 3 4 5
    //                  1 2 3 4 5
    //                  1 2 3 4 5
    //                  1 2 3 4 5
    //                  1 2 3 4 5
    int g, h, row3, coln3;
    cout<<"Enter the number of row : ";
    cin>>g;
    cout<<"Enter the number of coln : ";
    cin>>h;
    for(row3=1; row3<=g; row3++)
    {
        for(coln3=1; coln3<=h ; coln3++)
        {
            cout<<coln3<<" ";
        }
        cout<<endl;
    }

    // Question 5, print 5 4 3 2 1
    //                   5 4 3 2 1
    //                   5 4 3 2 1
    //                   5 4 3 2 1
    //                   5 4 3 2 1
    int i, j, row4, coln4;
    cout<<"Enter the number of row : ";
    cin>>i;
    cout<<"Enter the number of coln : ";
    cin>>j;
    for(row4=1; row4<=i; row4++)
    {
        for(coln4=j; coln4>=1 ; coln4 = coln4-1)
        {
            cout<<coln4<<" ";
        }
        cout<<endl;
    }
    
    //Question 6 , 1 4 9 16 25
    //             1 4 9 16 25
    //             1 4 9 16 25
    //             1 4 9 16 25
    //             1 4 9 16 25
    //             1 4 9 16 25
    int k, l, row5 , coln5 ;
    cout<<"Enter the number of row : ";
    cin>>k;
    cout<<"Enter the number of coln : ";
    cin>>l;
    for(row5=1; row5<=k;row5=row5+1)
    {
        for(coln5=1; coln5<=l; coln5=coln5+1)
        {
            cout<<coln5*coln5<<" ";
        }
        cout<<endl;
    }

   // from the prev que , for cube we can write code like
   int m, n, row6 , coln6 ;
    cout<<"Enter the number of row : ";
    cin>>m;
    cout<<"Enter the number of coln : ";
    cin>>n;
    for(row6=1; row6<=m;row6=row6+1)
    {
        for(coln6=1; coln6<=n; coln6=coln6+1)
        {
            cout<<coln6*coln6*coln6<<" ";
        }
        cout<<endl;
    }

    //Question7, print a a a a a
 //                    b b b b b
 //                    c c c c c 
                    // d d d d d
                    // e e e e e 
    int o, p  , row7 , coln7;

    cout<<"Enter the alphabet 1st: " ;
    cin>>o;
    cout<<"Enter the alphabet 2nd: ";
    cin>>p;
    for(row7 =1; row7<=o; row7++)
    {
        char name = 'a'+(row7-1);
        for(coln7=1; coln7<=p; coln7++)
        {
            cout<<name<<" ";
        }
        cout<<endl;
    }

    //Question 8, a b c d e 
    //            a b c d e 
    //            a b c d e 
    //            a b c d e 
    //            a b c d e 
       int q, r , row8 , coln8;

    cout<<"Enter the alphabet 1st: " ;
    cin>>q;
    cout<<"Enter the alphabet 2nd: ";
    cin>>r;
    for(row8 =1; row8<=q; row8++)
    {
        
        for(coln8=1; coln8<=r; coln8++)
        {
            char name1 = 'a'+(coln8-1);
            cout<<name1<<" ";
        }
        cout<<endl;
    }
    
    //we can also solve these que from diff method
    int row9 ;
    for(row9=1; row9<=5 ; row9++)
    {
        for(char col='a' ; col<='e' ;col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }

    //   Question9, print 1 2 3 4 5
    //                    6 7 8 9 10
    //                   11 12 13 14 15
    //                   16 17 18 19 20
    //                   21 22 23 24 25
    int count =1, row10 , coln10;
    for(row10 =1; row10<=5 ; row10++)
    {
        for(coln10 = 1 ; coln10 <= 5 ; coln10++)
        {
            cout<<count<<" ";
            count = count +1;
        }
        cout<<endl;
    }

    // we can also solve these que by another method
    int  row11 , coln11;
    for(row11 =1; row11<=5 ; row11++)
    {
        for(coln11 = 1 ; coln11 <= 5 ; coln11++)
        {
            cout<<(row11-1)*5+coln11<<" ";
            
        }
        cout<<endl;
    }

     

}