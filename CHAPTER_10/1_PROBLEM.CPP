// //Armstrong number
// #include<bits/stdc++.h>
// using namespace std;

// int countDigit(int n){
//    int  count = 0;
//    while(n){
//     count++;
//     n/=10;
//    }
//    return count;
// }

// bool armStrong(int num ,int digit){
//     int n = num , ans = 0 ,rem;
//     while(n){
//         rem = n%10;
//         n/=10;
//         ans = ans + pow(rem ,digit);
//     }
//     if(ans == num)
//     return 1;
//     else
//     return 0;

// }

// int main(){
//     int num;
//     cin>> num;
//     int digit = countDigit(num);
//     cout<<armStrong(num , digit);
// }


// 




#include<bits/stdc++.h>
using namespace std;
int main(){


    // Fabonacci number 
    int n ;
    cout <<"enter the number:";
    cin>>n;
    int arr[1000];

    arr[0]=0;
    arr[1]=1;

    for(int i = 2; i<n-1 ; i++){
        arr[i]= arr[i-1]+arr[i-2];
    }
    cout<<arr[n-1]<<" ";
}