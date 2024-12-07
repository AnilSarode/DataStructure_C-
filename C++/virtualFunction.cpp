#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {  // Virtual function
        cout << "Base class show function" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {  // Overriding the base class function
        cout << "Derived class show function" << endl;
    }
};

int main() {
    Base* basePtr;   // Base class pointer
    Derived derivedObj;
    
    basePtr = &derivedObj;

    // This will call Derived class's show function
    basePtr->show();  // Output: "Derived class show function"
    
    return 0;
}

