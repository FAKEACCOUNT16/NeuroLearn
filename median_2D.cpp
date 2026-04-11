//  2387 leetcode - median


#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;


int median(vector<vector<int>>& matrix){

    int n = matrix.size();
    int m = matrix[0].size();

    vector<int> temp;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            temp.push_back(matrix[i][j]);
        }
    }

    sort(temp.begin(), temp.end());

    int st = 0;
    int end = (n * m) - 1;

    int mid = (st + end) / 2;
    int element = temp[mid];

    return element;
}



//  1 2 3
//  4 5 6 
//  7 8 9

//  temp = 1 2 3 4 5 6 7 8 9



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

    int result = median(matrix);
    cout << "Median is " << result << endl;


}
