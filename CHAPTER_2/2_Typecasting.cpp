#include<iostream>
#include<typeinfo>
using namespace std;

class Base {
    virtual void func() {}
};

class Derived : public Base {};

int main(){
     
    // now we will understand Type casting {how to store one Data Type into another Data Type}
    // data loss occurs during type casting because different data type has different size{ like 4 byte/ 8 byte }
    // int a = 66;
    // char c = 'Z';
    // a = c;
    // cout<<a<<endl;
    // c = a;
    // cout<<c<<endl;

    //  C++ provides several ways to perform type casting, including implicit and explicit casts.
    // 1. Implicit Casting
    //     Implicit casting is done automatically by the compiler when there is no risk of data loss or when converting between compatible types.
    int intVar = 42;
    double doubleVar = intVar;  // Implicit casting from int to double
    cout << doubleVar <<endl;  // Output: 42.0
    

    // int a = 10;
    // double b = 5.5;
    // double result = a + b;  // Implicit casting of int to double in the operation
    // cout << result <<endl;  // Output: 15.5
    

//  2. Explicit Casting
// Explicit casting, or type casting, is where the programmer explicitly specifies the type conversion. This is done when implicit casting is not possible or when you want to control the conversion process precisely. In C++, explicit casting can be done using C-style casts, static_cast, dynamic_cast, const_cast, and reinterpret_cast.
    // C-style cast
    double x = 3.14;
    int y = (int)x;
    cout << "C-style cast: " << y << endl;

    // static_cast
    int a = static_cast<int>(x);
    cout << "static_cast: " << a << endl;

    // dynamic_cast
    Base* basePtr = new Derived;
    Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);
    if (derivedPtr) {
        cout << "dynamic_cast successful" << endl;
    } else {
        cout << "dynamic_cast failed" << endl;
    }

    // const_cast
    const int b = 10;
    int* c = const_cast<int*>(&b);
    *c = 20;
    cout << "const_cast: " << *c << endl;

    // reinterpret_cast
    int d = 65;
    char* e = reinterpret_cast<char*>(&d);
    cout << "reinterpret_cast: " << *e << endl;

    return 0;
}

