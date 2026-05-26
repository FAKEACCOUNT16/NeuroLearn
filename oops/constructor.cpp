// Constructor : A constructor is a special function that is automatically called when an object is created.
// Destructor : is special function automatically called when an object is destroyed (identified by using the symbol : ~)
// Both Properties are same : 
// 1. Same as Class name, 2. Object creation invoke, 3. No return type, 4. No i/p
// Types : 1. Default Parameter, 2. Parameterized Parameter ("THIS" KEYWORD), 3. Copy Constructor



#include<iostream>
using namespace std;

class Hero{
    
    public:
    // 1. Default Constructor
    Hero(){
        cout << "Constructor is Called " << endl << endl;
    }

    // Destructor
    ~Hero() {
        cout << "Destructor is Called" << endl << endl;
    }
};

class Student{

    int age;
    string name;

    // 2. Parameterized Parameter ("THIS" KEYWORD)
    public:
    Student(int age, string name){
        this -> age = age;
        this -> name = name;
    }

    void display() {
        cout << "Name: " << name << endl ;
        cout << "Age: " << age << endl;
    }
};

class Demo{

    int x;

    public :
    Demo(int a){
        x = a;
    }

    // 3. Copy Constructor
    Demo(const Demo &d) {
        x = d.x;
    }

    void show() {
        cout << x << endl;;
    }

};

int main(){

    cout << endl;
    cout << "Example for Default Constructor : " << endl;
    Hero paul;


    cout << "Example for Parameterized Constructor : " << endl;
    Student s(20, "Ketan");
    s.display();

    cout << endl;
    cout << "Example for Copy Constructor : " << endl;
    Demo d1(100); //Normal Constructor
    Demo d2 = d1;  // Copy Constructor
    d2.show();



    return 0;
}