#include<iostream>
using namespace std;

int main(){
     
    // now we will understand Type casting {how to store one Data Type into another Data Type}
    // data loss occurs during type casting because different data type has different size{ like 4 byte/ 8 byte }
    int a = 66;
    char c = 'Z';
    a = c;
    cout<<a<<endl;
    c = a;
    cout<<c<<endl;

    //  C++ provides several ways to perform type casting, including implicit and explicit casts.
    // 1. Implicit Casting
    //     Implicit casting is done automatically by the compiler when there is no risk of data loss or when converting between compatible types.
    int a = 10;
    double b = 5.5;
    double result = a + b;  // Implicit casting of int to double in the operation
    cout << result <<endl;  // Output: 15.5
    

//  2. Explicit Casting
// Explicit casting, or type casting, is where the programmer explicitly specifies the type conversion. 
   return 0;
}

