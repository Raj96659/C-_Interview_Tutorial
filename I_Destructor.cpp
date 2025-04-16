#include <iostream>
using namespace std;

class Demo {
public:
    // Constructor
    Demo() {
        cout << "Constructor called" << endl;
    }

    // Destructor
    ~Demo() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    Demo obj;  // Object created, constructor will be called

    cout << "Inside main function" << endl;

    // When obj goes out of scope, destructor will be called automatically
    return 0;
}
