#include<iostream>
using namespace std;

int main(){
    // pattern -  nested loops/
    // 1.for the outer loop , count the number of lines or rows
    // 2. for the inner loop ,focus on the columns and connect them somehow to the rows 
    // 3. print them inside the inner of the loop 
    // 4. observe symmetry (optional) 
     
    //  1. print *****
    //           *****
    //           *****
    //           *****
    //           *****

    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl; 

    // 2 . print *
    //           **
    //           ***
    //           ****
    //           *****

     for(i=5;i>0;i--){
        for(j=i;j<6;j++){
            cout<<"*";
        }
        cout<<endl;
     }
     cout<<endl; 

    //  3. print 1
    //           12
    //           123
    //           1234
    //           12345

    for(i = 1; i<=5; i++){
        for(j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
        
    }
    cout<<endl;

    // 4.print 1
    //         22
    //         333
    //         4444
    //         55555

    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
    cout<<endl;

//     5. print *****
//              ****
//              ***
//              **
//              *
    for(i=1;i<=5;i++){
        for(j=i;j<=5;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;

    // 6. print 12345
    //          1234
    //          123
    //          12
    //          1

    for(i=5;i>=0;i--){
        for(j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
        
    }
    cout<<endl;

}