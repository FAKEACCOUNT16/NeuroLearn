
// Time Complexity : 
//  Best Case : make your code in Optimized version  
//  Worst Case 


// arr[] = 1, 2, 100, 3, 9, 50

// sort = 1, 2, 3, 9, 50, 100

// 1. Selection Sort 
// 2. Bubble Sort 
// 3. Insertion Sort


// Selection Sort : Smallest element la techa right jaagya vr nit place karaicha ahe
// Bubble Sort : Largest Element at the end
// Insertion Sort : Takes one element and insert it into sorted part

#include<iostream>
#include<vector>
using namespace std;

// To print an array
void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Time complexity : O(n*n)
void selectionsort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        int minIndex = i;
        for(int j = i + 1; j < n; j++){
            if(arr[minIndex] > arr[j]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

// Time complexity : O(n*n) - Worst Case
// O(n) - Optimized version
void bubblesort(int b_arr[], int n){
    for(int i = 1; i < n; i++){
        for(int j = 0; j < n - i; j++){
            if(b_arr[j] > b_arr[j+1]){
                swap(b_arr[j], b_arr[j+1]);
            }
        }
    }
}

//Time complexity : O(n) 
void insertionsort(int b_arr[], int n){

    for(int i = 1; i < n; i++){

        int key = b_arr[i];
        int j = i - 1;

        while(j >= 0 && b_arr[j] > key){
            b_arr[j+1] = b_arr[j];
            j--;
        }

        b_arr[j+1] = key;
    }
}


int main(){

    int arr[] = {5, 9, 1, 2, 3};
    int b_arr[] = {10, 1, 7, 6, 14, 9};

    cout << "Before array 1: " << arr << endl;
    cout << "Before array 2: " << b_arr << endl;

    cout << "Using Selection Sort" << endl;
    selectionsort(arr, 5);
    printArray(arr, 5);
    
    cout << "Using Bubble Sort" << endl;
    bubblesort(b_arr, 6);
    printArray(b_arr, 6);

    cout << "Using Insertion Sort" << endl;
    insertionsort(b_arr, 6);
    printArray(b_arr, 6);


}


