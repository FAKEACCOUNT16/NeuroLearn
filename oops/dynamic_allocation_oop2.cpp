// Dynamic allocation : it means creating objevt or memeory during runtime using NEW and deleting DELETE. 
// To assign values use "->"
// ClassName *ptr = new ClassName();
// Difference Between static and Dynamic objects


#include<iostream>
using namespace std;

class Student {

    public:
    string name;

    void display(){
        cout << "Name: " << name;
    }
};

int main(){
    Student *s = new Student();

    s->name = "Ketan";
    s->display();


    delete s;

    return 0;
}