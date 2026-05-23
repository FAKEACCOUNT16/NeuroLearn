//  2D array
#include<iostream>
using namespace std;

// Allocates new pointes for rows and cols
int** create2DArray(int rows, int cols) {
    int **arr = new int*[rows];
    for(int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }
    return arr;
}


// Release memory Function - Dellocates 2D array
void delete2DArray(int **arr, int rows){
     for(int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;
}


// Input or Filling an array
void fillArray(int **arr, int rows, int cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            arr[i][j] = i * cols + j;
        }
    }
}

// Printing an Array
void printArray(int **arr, int rows, int cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
           cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}



int main(){

    int rows = 3, cols = 4;

    // Creation
    int **arr = create2DArray(rows, cols);
    fillArray(arr, rows, cols);
    printArray(arr, rows, cols);


    // Memory Release - Called here to present memory lack
    delete2DArray(arr, rows);

    cout << endl;
    cout << "memory has been released successfully" << endl;;

    //  Good Practice : Set Pointer to NULL after deletion
    arr = nullptr;


    return 0;
}