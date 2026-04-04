//www.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1

// Input: arr[] = [1, 4, 45, 6, 10, 8], target = 13
// Output: true 
// Explanation: The triplet {1, 4, 8} sums up to 13.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int cout_triplet(vector<int> arr, int n, int target){

    sort(arr.begin(), arr.end());

    int count = 0;

    for(int i = 0; i < n - 2; i++){

        int left = i + 1;
        int right = n - 1;

        while(left < right) {
            int sum = arr[i] + arr[left] + arr[right];

            if(sum < target){
                count += (right - left);
                left++;
            }
            else{
                right --;
            }

        }

    }

}

int main(){

    vector<int> arr = {1, 3, 4, 5, 7};
    int n = arr.size();
    int sum = 12;

    cout << cout_triplet(arr, n, sum) << endl;
}