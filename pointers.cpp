#include<iostream>
using namespace std;

int main(){
    int num = 5;

    // Just Understanding the Memory Address concept

    cout << "Value of Num is : " << num << endl;
    cout << "Address of Num is : " << &num << " includes random numbers and hexadecimal format "<< endl;

    // Understanding Pointers

    cout << "Creating Pointers : " << endl;
    int *ptr = &num;
    cout << "Ptr prints address for example : " << ptr << endl;
    cout << "Pointer points the value present at ptr address : " << *ptr << endl;

}