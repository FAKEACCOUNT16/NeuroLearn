// Largest sum of row 

//  3 4 11  -> 18
//  2 12 1 -> 15
//  7 8 7 -> 22

// Compare the sum of rows and find the largest value among them
//  and return there idx which is :  2

#include<iostream>
#include<vector>
#include<climits>
using namespace std;


int largestRowSum(vector<vector<int>>& matrix, int rows, int cols){
    
    int maxSum = INT_MIN;
    int rowIndex = -1;

    for(int i = 0; i < rows; i++){
        int sum = 0;
        for(int j = 0; j < cols; j++){
            sum += matrix[i][j];   // sum = sum + matrix[i][j]
        }
        cout << "Sum of row : " << i << "=" << sum << endl;

        if(sum > maxSum){
            maxSum = sum;
            rowIndex = i;
        }
    }
    cout << "Maximum Sum = " << maxSum << endl;
    return rowIndex;
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

    int ans = largestRowSum(matrix, 3, 3);
    cout << "Row index with largest Sum = " << ans;

}