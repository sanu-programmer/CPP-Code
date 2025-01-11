#include<bits/stdc++.h>
using namespace std;

int main(){

    // string and getline
    // cout<<"Enter the string: ";
    // string str;
    // getline(cin, str); //getline print entire line 
    // cout<<str;
    // return 0;

    //1D array

    // int arr[5];
    // cin>> arr[0] >>arr[1] >> arr[2] >> arr[3] >>arr[4];

    // cout<<arr[3];
    // return 0;

    //2D array
    // int arr[3][5];
    // arr[1][3]= 78;
    // cout<<arr[1][2];
    // return 0;
    

    string s = "Sanu";
    cout<<s[1];
    int len = s.size();
    s[len - 1] = 'z';
    cout << s[len-1];
    return 0;


}