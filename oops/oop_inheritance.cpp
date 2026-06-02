// Inheritance is an OOP concept where one class (derived/child class) acquires the properties and behaviors of another class (base/parent class).



// Syntax : 

// class Base {
//     // members
// };

// class Derived : public Base {
//     // additional members
// };


#include<iostream>
using namespace std;

class Animal {

    public:
    void eat() {
        cout << "Animal is eating" << endl;
    }
};

class Dog : public Animal {

    public:
    void bark() {
        cout << "Dog is Barking" << endl;
    }
};

int main(){

    Dog d;
    d.eat();  // Inherited from Animal
    d.bark(); // Dog's own function

    return 0;
}







