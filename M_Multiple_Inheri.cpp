#include <iostream>
using namespace std;

// First base class
class Teacher {
public:
    void teach() {
        cout << "Teaching students." << endl;
    }
};

// Second base class
class Singer {
public:
    void sing() {
        cout << "Singing a song." << endl;
    }
};

// Derived class inheriting from both Teacher and Singer
class Artist : public Teacher, public Singer {
public:
    void perform() {
        cout << "Performing on stage." << endl;
    }
};

int main() {
    Artist a;
    a.teach();     // From Teacher
    a.sing();      // From Singer
    a.perform();   // Own function
    return 0;
}
