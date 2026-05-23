// Recursion Examples

#include<iostream>
using namespace std;

//  Example 1
int fact(int n){
    // base case
    if(n == 0){
        return 1;
    }
    int smaller_prblm = fact(n-1);   // recursive call
    int bigger_prblm = n * smaller_prblm;
    return bigger_prblm;
}

// Example 2 : Tail Recursion
void reach_dist(int src, int dest){

    //  Base case
    if(src == dest){
        cout << "Reached" << endl;
        return;
    }

    src ++;   // Processing 

    reach_dist(src, dest); // RR
}

int main(){

    int n;
    cout << "enter number : " << endl;
    cin >> n; 
    cout << fact(n) << endl;

    int src = 1;
    int dest = 10;

    reach_dist(src, dest);
    return 0;
}