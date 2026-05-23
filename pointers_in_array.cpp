#include<iostream>
using namespace std;

int main(){
    int arr[10] = {};
    cout << "Address of first memory block is : " << arr << endl;   //for first
    cout << "Address of first memory block is : " << &arr[4] << endl;  // for random blocks

    cout << "Value present at address of first memory block : " << *arr << endl;
}