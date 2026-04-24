#include<iostream>
#include<vector>
#include<climits>
using namespace std;

// Creating a function using Vector :
vector<int> test(){
    //  code block;


    // return  // ignr 1
}




// created a function
int test(int arr[], int size, int target){

// code block



    return 1;   //ignr 1
}



// int function name : to return a number 
// bool function name : to return boolean values
// Vector : The values in an array can be store as dynamic


int main(){

    int arr[] = {1, 2, 3, 4, 5}; //initializing an array
    int size = 5;
    int i = 0;
    for(int i = 0; i < size; i++){     // printing an array
        cout << arr[i] << endl;
    }


    int target;
    cin >> target;    //input

    cout << "Target is " << target << endl;   //output


    //  Calling a function
    int result = test(arr, size, target);
    cout << result << endl;


}