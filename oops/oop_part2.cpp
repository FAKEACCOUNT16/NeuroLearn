// Polymorphism : One Interface, Multiple behaviours (Importance : 1. Reducing code complexity)
// The same function/operator/object behaves differently in different situations.

// Types :
// 1. Compile-Time Polymorphism 
// 2. Run-Time Polymorphism

// Compile-Time : defination , Code and its types
// Compiler decides which function to call during compilation
// Types : 1. Function Overloading
// 2. Operator Overloading 

// 1. Function Overloading 
// Multiple functions with same name and different parameters
// How compier decides : compiler checks -> 1. number of arguments, 2. type of arguments, 3.Order of arguments

// 2. Operator Overloading : Giving special meaning to operators for user defined objects

// Example : FO and OO
#include<iostream>
using namespace std;

// Operator Overloading
class Complex {

    int real, imag;

    public:

    Complex(int r, int i){
        real = r;
        imag = i;
    }

    Complex operator + (Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }

    void display() {
        cout << real << " + " << imag << "i";
    }

};

// Function Overloading
class Print {
    public : 

    void show(int x){
        cout << "Integer : " << x << endl;
    }

    void show(double y){
        cout << "Double : " << y << endl;
    }

    void show(string s){
        cout << "String : " << s << endl;
    }

};

int main() {
    Print p;

    // Function Overloading CALLS
    cout << endl;
    p.show(2);
    p.show(5.5);
    p.show("Hello");

    cout << endl;

    // Operator Overloading
    Complex c1(2, 3);
    Complex c2(4, 5);
    Complex c3 = c1 + c2;

    c3.display();

    return 0;

}



