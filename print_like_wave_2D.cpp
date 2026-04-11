//  1 2 3
//  4 5 6
//  7 8 9

// print o/p : 1 4 7 8 5 2 3 6 9

#include<iostream>
#include<vector>
using namespace std;


vector<int> wavePrint(vector<vector<int>>& matrix, int n, int m){


    vector<int> ans;

    // even row -> top to bottom

    for(int col = 0; col < m; col++){

        if(col % 2 == 0){
            for(int row = 0; row < n; row++){
                ans.push_back(matrix[row][col]);
            }
        }
        else{
        // bottom to top
            for(int row = n-1; row >= 0; row--){
                ans.push_back(matrix[row][col]);
            }
        }
    }


    return ans;

}


int main(){

    int n, m;
    cout << "Enter rows and column : ";
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));

    cout << "Enter elements : " << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matrix[i][j];
        }
    }

    cout << "Matrix array : " << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }



    vector<int> result = wavePrint(matrix, n, m);

    cout << "After" << endl;
    for(int val : result){
        cout << val << " ";
    }

    cout << endl;
    return 0;
}