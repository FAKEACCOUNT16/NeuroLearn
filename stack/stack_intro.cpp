#include<iostream>
#include<stack>
using namespace std;

class Stack{

    public:
    
    //  Properties
    int *arr;
    int size;
    int top;

    // Behaviour
    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top > 1){   // check for space in stack
            top++;
            arr[top] = element;
        }
        else{
            cout << "Stack Overflow" << endl;
        }
    }

    void pop(){
        if(top >= 0){  // check for space
            top--;
        }
        else{
            cout << "Stack Overflow" << endl;
        }
    }

    int peek(){
        if(top >= 0){
            return arr[top];
        }
        else{
            cout << "Stack Overflow" << endl;
        }
    }



    bool isEmpty() {
        if(top == -1) {
            return true;
        }
        else{
            return false;
        }
    }


};



int main(){

    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);

    cout << st.peek() << endl;

    /*

    STL

    stack <int> st;

    st.push(22);
    st.push(25);
    st.push(30);

    cout << "Top Element is " << st.top() << endl;

    st.pop();

    if(st.empty()){
        cout << "Stack is Empty" << endl;
    }
    else{
        cout << "Stack is not Empty" << endl;
    }

    cout << "Size of stack is : " << st.size() << endl;

    */

    return 0;
}

