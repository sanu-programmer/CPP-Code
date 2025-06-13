#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int n , int key){
    //start ,  end  , mid
    int start = 0 , end = n-1 , mid;
    while(start<=end){
        //mid ko find karo 
         mid = (start+end)/2;
        //arr[mid] ===key
        if(arr[mid]==key)
        return mid;
        //arr[mid] <key
        else if(arr[mid] <key)
        start = mid+1;
        //arr[mid]>key
        else
        end= mid-1;
    }
    return -1;

}

int main(){
    //Binary search  its time complexity is O(logn) for worst case and O(1) for best case;
    int n ,key, arr[1000];
    cout<<"Enter the size of an array:";
    cin>>n;
    cout<<"Enter the key ";
    cin>>key;
    cout<<"Enter the element in an array";
    for(int i = 0; i<n ;i++){
        cin>>arr[i];
    }
    cout<<binarySearch(arr,n,key);

}