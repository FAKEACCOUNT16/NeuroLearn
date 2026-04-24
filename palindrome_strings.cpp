// Leetcode - 125 : Check for Valid Palindrome

#include<iostream>
#include<vector>
using namespace std;

bool valid(char ch){
 return (ch >= 'a' && ch <= 'z') ||
        (ch >= 'A' && ch <= 'Z') ||
        (ch >= '0' && ch <= '9');
}

char lowerCase(char ch){
    if(ch >= 'A' && ch <= 'Z'){
        return ch - 'A' + 'a';
    }
    return ch;
}

bool isPalindrome(string s){
    int st = 0;
    int e = s.length() - 1;

    while(st <= e){

        while(st < e && !valid(s[st])){
            st ++;
        }

         while(st < e && !valid(s[e])){
            e --;
        }

        if(lowerCase(s[st]) != lowerCase(s[e])){
            return false;
        }
        st++;
        e--;
    }
    return true;
}



int main(){

    string text;
    cout << "Enter text: ";
    getline(cin, text);

    if(isPalindrome(text)){
        cout << "Valid Palindrome" << endl;
    }
    else{
        cout << "InValid Palindrome" << endl;
    }

    return 0;
}