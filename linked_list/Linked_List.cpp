#include<iostream>
using namespace std;

class Node {

    public:
    int data;
    Node* next;

    // constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

};

void InsertAtHead(Node* &head, int d) {

    // new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void InsertAtTail(Node* &tail, int d) {

    // new node create
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail -> next;
}

void InsertAtPosition(Node* &head, Node* &tail, int position, int d){

    // Insert At Start
    if(position == 1) {
        InsertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;
    while(cnt < position - 1 && temp != NULL){
    temp = temp -> next;
    cnt++;
}

    // Insert at end 
    if(temp == tail) {
        InsertAtTail(tail, d);
        return;
    }

    // Create new Node
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp-> next;
    temp->next = nodeToInsert;
}

void print(Node* &head){

    Node* temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
        cout << endl;
}


int main() {

    // Created a New Node
    Node* node1 = new Node(10);
    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;


    Node *tail = node1;
    Node *head = node1;

    // print(head);

    InsertAtTail(tail, 12);
    // print(head);

    InsertAtTail(tail, 15);
    // print(head);

    InsertAtPosition(head, tail, 2, 11);
    print(head);

    InsertAtPosition(head, tail, 4, 13);
    print(head);

    InsertAtPosition(head, tail, 1, 5);
    print(head);


    return 0;
}