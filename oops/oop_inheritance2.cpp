// Multi-Level Inheritance

#include<iostream>
using namespace std;

class Animal {

    public :
    int age;
    int weight;


    public:
    void bark() {
        cout << "Barking" << endl;
    }
};

class Dog : public Animal {

};

class GermanShepheard : public Dog {

};


int main() {

    GermanShepheard gs;
    gs.bark();

    return 0;
}