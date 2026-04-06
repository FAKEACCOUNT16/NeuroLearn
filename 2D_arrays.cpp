//  2D array : it stores the data in rows and columns, its like matrix
// 3 x 3

#include<iostream>
using namespace std;

int main(){

    int arr[3][3];

    cout << "Enter elements in an 2D array : " ;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }

    cout << "Matrix is : " << endl;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;

}

