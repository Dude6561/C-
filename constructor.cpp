#include <iostream>
using namespace std;

class Demo {
public:
    int* valuePtr;  // pointer to dynamically allocated memory

    // Constructor: allocates memory and initializes value
    Demo(int value) {
        valuePtr = new int(value);
    }

    // Copy constructor: deep copies the data pointed to by d.valuePtr
    Demo(const Demo &d) {
        valuePtr = new int(*d.valuePtr);  // allocate new memory and copy the value
        cout << "Copy constructor called (deep copy)" << endl;
    }

    // Destructor: frees the dynamically allocated memory
    ~Demo() {
        delete valuePtr;
    }

    void show() {
        cout << valuePtr << endl;
    }
};

int main() {
    Demo d1(50);      // creates d1 with valuePtr pointing to 50
    Demo d2 = d1;     // copy constructor called, deep copy

    d1.show();        // prints 50 (unchanged)
    d2.show();        // prints 100 (changed)

    return 0;
}
