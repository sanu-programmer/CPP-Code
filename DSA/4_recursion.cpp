// Print name n times using recursion


#include<bits/stdc++.h>
using namespace std;

// string f(int i, int n){
//     if(i>n)
//     return;
//     cout<<"sanu"<<endl;
//     f(i+1,n);
// }

// int main(){
//     int n;
//     cin>>n;
//     f(1 , n);
// }



// print 1 to n using recursion


// #include<bits/stdc++.h>
// using namespace std;
// int i,n;
// void f(i,n){
//     if(i>n)
//     return ;
//     cout<<i;
//     f(i+1,n);
// }

// int main(){
//     int n;
//     cin>>n;
//     f(1 , n);
// }


//print n to 1 using recursion


// #include<bits/stdc++.h>
// using namespace std;
// void i,n;
// int  f(i,n){
//     if(i<1)
//     return ;
//     cout<<i;
//     f(i-1,n);
// }

// int main(){
//     int n;
//     cin>>n;
//     f(n, n);
// }



// print 1 to n using backtracking

// #include<bits/stdc++.h>
// using namespace std;
// int i,n;
// void f(i,n){
//     if(i<1)
//     return ;
//     f(i-1,n);
//     cout<<i;
// }

// int main(){
//     int n;
//     cin>>n;
//     f(n , n)
// }


// print n to 1 using backtracking

// #include<bits/stdc++.h>
// using namespace std;
// int i,n;
// void f(i,n){
//     if(i>n)
//     return ;
//     f(i+1,n);
//     cout<<i;
// }

// int main(){
//     int n;
//     cin>>n;
//     f(1 , n)
// }



// print sum of 1 to n using recursion (parametrised)


// void f(i,sum){
//     if(i<1){
//         cout<<sum<<endl;
//         return;   
//     }
//     f(i-1 , sum+1)
// }
// int main(){
//     int n ;
//     cin>>n;
//     f(n,0);
// }


// print sum of 1 to n using recursion (functional)


// int sum(int n){
//     if(n == 0) return 0;
//     return n + sum(n-1);
// }

// int main(){
//     int n = 3;
//     cout << sum(n) <<endl;
// }


//print factorial using recursive code 

// int fact(int n){
//     if(n == 0 ) return 1;
//     return n * fact(n-1);
// }

// int main(){
//     int n = 4;
//     cout<< fact(n);
// }


//Reverse an array using recursion

// void f(int i , int arr[], int n ){
//     if(i>=n/2) return ;
//     swap(arr[i] ,arr[n-i-1]);
//     f(i+1 ,arr , n);
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i = 0;i<n ; i++) cin >> arr[i];
//     f(0 , arr , n);
//     for(int i =0 ;i<n ;i++) cout<< arr[i] <<" ";
// }


//check whether a given string is palindrome or not

// bool f(int i , string &s){
//     if(i >= s.size() /2) return true;
//     if(s[i] != s[s.size() -i -1]) return false;
//     return f(i+1 ,s);
// }

// int main(){
//     string s = "madsm";
//     cout << f(0 , s);
// }





