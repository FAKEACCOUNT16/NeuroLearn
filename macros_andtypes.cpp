#include<iostream>
using namespace std;

inline int GetMax(int a, int b){

    return (a>b) ? a : b;

}

int main(){
    //  MACROS
    int r = 5;
    // double pi = 3.14;
    // #define PI 3.14;

    // int area = PI * r * r;

    // cout << area << endl;


    // INLINE FUNCTION
    int a = 1, b = 2;
    int ans = 0;

    cout <<" before :" << endl;
    ans = GetMax(a,b);
    cout << ans << endl;

    a = a + 3;
    b = b + 1;

    cout <<" after :" << endl;
    ans = GetMax(a,b);
    cout << ans << endl;

    return 0;
}