#include<iostream>
using namespace std;

class Animal {

    public:
    void bark() {
        cout << "Barkinggg" << endl;
    }
};

class Human {

    public:
    string color;

    public:
    void speak() {
        cout << "Speaking...." << endl;
    }
};

class Combine : public Animal, public Human {

};


int main() {

    Combine obj;
    obj.bark();
    obj.speak();

    return 0;
}