//Objects : Entity which consist of state / property and Behaviour
//Class : User - Defined Data Type (Template)
//Access modifier : To get access of Properties -> (1. Public, 2. Private(by default), 3. Protected)
//File handling : Just create Hero.cpp (Class name) and to access the property of class create main function in new file and must include this statement(#include "Hero.cpp")
// Getter and Setter : To access the Private values from Private Properties of Class
// Padding : Extra bytes added for alignment


#include<iostream>
using namespace std;

// creation of class
class Hero{

    //properties
    private :
    int health;

    public:
    char level;

    //  Getter : To access the Private value
    int getHealth() {
        return health;
    }

    char getlevel() {
        return level;
    }

    //  Getter : To set the Private value
    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }

};

int main(){

    //creation of obj
    Hero paul;

    //assigning values for properties (public)
    // Static allocation
    paul.level = 'A';
    cout << "Health is : " << paul.level << endl; //for public property

    //assigning and printing values for properties (private)
    // using getter
    cout << "Paul Health is (before setter) :  " << paul.getHealth() << endl;

    //using setter
    paul.setHealth(70);
    cout << "Paul Health is (after setter) : " << paul.getHealth() << endl;


    cout << "Size of obj " << sizeof(paul) << endl;
    return 0;
}