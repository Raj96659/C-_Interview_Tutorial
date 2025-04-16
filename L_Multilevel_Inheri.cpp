#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "This animal eats food." << endl;
    }
};

// Derived from Animal
class Dog : public Animal {
public:
    void bark() {
        cout << "The dog barks." << endl;
    }
};

// Derived from Dog
class Puppy : public Dog {
public:
    void weep() {
        cout << "The puppy weeps." << endl;
    }
};

int main() {
    Puppy p;
    p.eat();   // From Animal
    p.bark();  // From Dog
    p.weep();  // From Puppy
    return 0;
}
