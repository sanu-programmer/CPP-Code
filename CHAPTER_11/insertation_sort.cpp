#include<bits/stdc++.h>
using namespace std;

int main(){
    //Insertation sort
    int arr[1000];
    int n;
    cout<<"Enter the size of an array:";
    cin>>n;
    cout<<"Enter the element in an array";
    for(int i = 0; i<n ;i++){
        cin>>arr[i];
    }

    for(int i = 0; i<n;i++)
    {
        for(int j = i ; j>0 ; j--){
            if(arr[j] <arr[j-1])
            swap(arr[j],arr[j-1]);
            else
            break;
        }
    }
    for(int i = 0; i<n ;i++){
        cout<<arr[i]<<" ";
    }

}