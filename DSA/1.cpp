#include<bits/stdc++.h>
using namespace std;

// int main(){

    // string and getline
    // cout<<"Enter the string: ";
    // string str;
    // getline(cin, str); //getline print entire line 
    // cout<<str;
    // return 0;

    //1D array

    // int arr[5];
    // cin>> arr[0] >>arr[1] >> arr[2] >> arr[3] >>arr[4];

    // arr[3] += 10;
    // cout<<arr[3];
    // return 0; it is stored in cosecutive addres


    //2D array
    // int arr[3][5];
    // arr[1][3]= 78;
    // cout<<arr[1][2];
    // return 0;
    

    // string s = "Sanu";
    // cout<<s[1];
    // int len = s.size();
    // s[len - 1] = 'z';
    // cout << s[len-1];
    // return 0;


    // for loop 
    // for(int i = 1; i<=10; i+=1)

    // {
    //     cout<<"Sanu"<<endl;
    // }

    // while loop 
    // int i = 1;
    // while(i<5){
    //     cout<<"striver" <<i<<endl;
    //     i++;
    // }

    // while do loop 
    // int i = 2;
    // do{
    //     cout<<"striver" <<i<<endl;
    //      i++;

    // } while(i<=1);
    // cout<<i<< endl;
    

    // functions are set of code which performs something for you 
    // functions are used to modularise code 
    // functions are used to increase readability 
    // functions are used to use same code multiple times 
    // void - which does not return anything 
    // return 
    // parameterised 
    // non parameterised 

    
//     void printName(string name){
//         cout<<"hey "<<name<<endl;
//     }
//   int main(){
//     string name;
//     cin>>name;
//     printName(name);
    

//     string name2;
//     cin>>name2;
//     printName(name2);
//     return 0;

// take two numbers and print its sum 
// int sum(int num1 , int num2){
//     int num3 = num1 + num2; // 5+6 = 11
//     return num3;
// }
// int main(){
//     int num1, num2;
//     cin>>num1>>num2;
//     int res = sum(num1 , num2);
//     cout<<res;
//     return 0;
   

// }

//pass by value


// void doSomething(int num){
//     cout<<num <<endl;
//     num+=5;
//     cout << num <<endl;
//     num+=5;
//     cout << num <<endl;

// void  doSomething(string s){
//      s[0] = 't';
//      cout <<s<<endl;
   

// }
// int main(){
    // int num = 10;
    // doSomething(num);
    // cout << num << endl;
    

    // string s = "raj";
    // doSomething(s);
    // cout << s << endl;
    // return 0;





// }

// pass by reference

// void doSomething(int &num){
//     cout<<num <<endl;
//     num+=5;
//     cout << num <<endl;
//     num+=5;
//     cout << num <<endl;

// }

// int main(){
//     int num = 10;
//     doSomething(num);
//     cout << num << endl;
// }


// void doSomethhing(int arr[]){

// }
// int main(){
//     int arr[5];
//     for(int i = 0; i<=4;i = i+1){
//         cin>>arr[i];

//     }
//     for(int i =0 ; i<=4; i+i+1){
//         cout << arr[i] <<" ";
//     }

// }