//www.geeksforgeeks.org/dsa/maximum-and-minimum-in-an-array/

// Linear Search 

#include<iostream>
using namespace std;

void findMinMax(int arr[], int n){

    int max = arr[0];       // took first element from an array
    int min = arr[0];

    for(int i = 1; i < n; i++){    //traverse through whole array from indx 1

        if(arr[i] > max){       
            max = arr[i];          // compare
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }

    cout << "Minimum : " << min << endl;
    cout << "Maximum : " << max << endl;
}


int main(){
    int arr[] = {10, 1, 7, 6, 14, 9};
    int n = 6;

    findMinMax(arr, n);
    return 0;
}


