// 1_Finding largest element in an array
//Brute force 
// void selection_sort(int arr[] , int n ){
//       for(int i = 0 ; i <n-2 ; i++){
//         int mini = i;
//         for(int j = 0 ;j <n-1 ; j++){
//           if(arr[j] <arr[mini]){
//             mini = j;
//           } 
//         }
//         int temp = arr[mini];
//         arr[mini] = arr[i];
//         arr[i] = temp;
//       }
//       return arr[n-1];
// }


//optimal
#include<bits/stdc++.h>
using namespace std;
int largest_no(int arr[] , int n ){
     int largest = arr[0];
     for(int i = 0; i <n ; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
     }
     return largest;
}


// 2_Second largest element in an array
//better approach
int second_largest_no(int arr[] , int n ){
    int largest = arr[0];
    for(int i = 0 ;i<n ; i++){
        if(arr[i] >largest){
            largest = arr[i];
        }

    }
    int sec_largest = -1;
    for(int i = 0 ;i <n ;i++){
        if(arr[i] > sec_largest && arr[i] != largest){
            sec_largest = arr[i];
        }
    }
    return sec_largest;
}

//optimal approach 
int secondLargest(vector<int> &a , int n){
    int largest = a[0];
    int slargest = -1;
    for(int i = 0;i <n ;i++){
       if(a[i]>largest){
        slargest = largest;
        largest = a[i];
       }
       else if(a[i] < largest && a[i] >slargest){
        slargest = a[i];
       }
    }
    return slargest;
}

//3 _second smallest number in an array

int secondSmallest(vector<int> &a , int n){
    int smallest = a[0];
    int ssmallest = INT_MAX;
    for(int i = 1 ; i<n ;i++){
       if(a[i] <smallest){
        ssmallest = smallest;
        smallest = a[i];
       }
       else if(a[i]>smallest && a[i] <ssmallest){
        ssmallest = a[i];
       }
    }
    return ssmallest;
}

//4 _check whether the array is sorted or not ; 

bool isSorted(vector<int> &a ,int n ){
    for(int i = 1 ;i <n ; i++){
        if(a[i] >= a[i-1]){
            return true;
        }
        else{
            return false;
        }
    }
    return true;
}

// 5_Remove duplicates from sorted array 
//brute force 
int remove_duplicates(set<int > st ,int arr[] , int n){
    for(int i = 0 ; i<n ; i++ ){
        st.insert(arr[i]);
    }
    int index = 0;
    for(auto it : st){
        arr[index] = it;
        index++;
    }
}

// optimal 

int removeDuplicates(vector<int> &arr , int n ){
    int i = 0;
    for(int j = 1 ;j <n ;j++){
        if(arr[i] != arr[j]  ){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}


//6 left rotate the array by one place 
int leftRotate(vector<int> &arr , int n){
    int temp = arr[0];
    for(int i = 1 ; i< n ; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    return arr[n];
}


