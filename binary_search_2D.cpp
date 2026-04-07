// 74 - leetcode

// n = row (size)
// m = col (size)

// n * m


#include<iostream>
#include<vector>
using namespace std;

bool binarySearch(vector<vector<int>>& matrix, int target){

    int n = matrix.size();
    int m = matrix[0].size();

    int st = 0;
    int end = (n * m) - 1;

    int mid = (st + end) / 2;

    while(st <= end){

        int element = matrix[mid/m][mid%n];   //
        
        if(element == target){
            return 1;
        }
        if(element < target){
            st = mid + 1;
        }
        else{
            end = mid - 1;
        }

        mid = (st + end) / 2;
    }

    return 0;

}



int main(){

    cout << "Enter rows and columns : ";
    int rows, cols;
    cin >> rows;
    cin >> cols;
    // cin >> rows >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));

    cout << "enter Elements in matrix : " << endl;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cin >> matrix[i][j];
        }
    }

    cout << "Elements Present in matrix : " << endl;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Enter Element to be search : " << endl;
    int target;
    cin >> target;

    bool found = binarySearch(matrix, target);

    if(found){
        cout << "Element Found" << endl;
    }
    else{
        cout << "Element Not Found" << endl;
    }

    return 0;

}