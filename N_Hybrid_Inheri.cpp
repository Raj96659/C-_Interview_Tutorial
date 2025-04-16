#include <iostream>
using namespace std;

// Base class
class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

// B and C both inherit from A
class B : virtual public A {
public:
    void showB() {
        cout << "Class B" << endl;
    }
};

class C : virtual public A {
public:
    void showC() {
        cout << "Class C" << endl;
    }
};

// D inherits from B and C
class D : public B, public C {
public:
    void showD() {
        cout << "Class D" << endl;
    }
};

int main() {
    D obj;
    obj.showA();  // From class A
    obj.showB();  // From class B
    obj.showC();  // From class C
    obj.showD();  // From class D
    return 0;
}
