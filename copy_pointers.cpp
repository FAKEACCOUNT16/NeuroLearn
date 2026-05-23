#include<iostream>
using namespace std;

int main(){
    int arr[10] = {};
    int num = 5;
    int *p = &num;
   
    int *q = p;
    cout << p << "-" << q << endl;
    cout << *p << "-" << *q << endl;

    cout << "Address of first memory block is : " << arr << endl;   //for first
    cout << "Address of first memory block is : " << &arr[4] << endl;  // for random blocks
}