//  Find a unique element from an array
//  int arr[] = {1, 4, 3, 1, 3}
// Unique element is 4

// X-OR
// 0 ^ 0 = 0
// 1 ^ 1 = 0
// 1 ^ 0 = 1
// 0 ^ 1 = 1

// XOR : val1 ^ val 2 = ?

#include<iostream>
#include<vector>
using namespace std;

int unique(int a[], int n){

    int ans = 0;
    for(int i = 0; i < n; i++){
        ans = ans ^ a[i];
    }
    return ans;

}


int main(){

    int a[] = {1, 4, 3, 1, 3};

    int result = unique(a, 5);
    cout << result << endl;

    return 0;
}