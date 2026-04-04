// Search in rotated and sorted array
// 7, 9 -> array 1st part sorted
// 1, 2, 3 -> array 2nd part sorted


#include<iostream>
#include<vector>
using namespace std;

int searchRotated(int arr[], int n, int key){


    int low = 0;   // start
    int high = n - 1;    //end

    while(low <= high){
        int mid = (low + high) / 2;

        if(arr[mid] == key){
            return mid;   // numerical form
        }

        //Left half sorted
        if (arr[low] <= arr[mid]){

            if(key >= arr[low] && key < arr[mid]){
                high = mid - 1;  // end
            }
            else{
                low = mid + 1;  //start
            }
        }


        //Right half sorted
        if (arr[low] <= arr[mid]){

            if(key > arr[mid] && key <= arr[high]){
                low = mid + 1;
            }
            else{
                high = mid + 1;
            }
        }
    }
    return -1;
}


int main(){
    int arr[] = {7, 9, 1, 2, 3};
    int n = 5;
    int key = 2;

    int result = searchRotated(arr, n, key);

    if(result != -1){
        cout << "Element found at index : " << result << endl;
    }
    else{
        cout << "Element not found";
    }
    return 0;
}
