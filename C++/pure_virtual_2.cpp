#include <iostream>
using namespace std;

class Shape {   // Abstract class
public:
    virtual void draw() = 0;      // Pure virtual function
    virtual void area() = 0;      // Another pure virtual function
};

// Derived class that overrides only ONE pure virtual function
class Circle : public Shape {
public:
    void draw() override {        // Overrides draw
        cout << "Drawing Circle\n";
    }
    // ❌ area() is NOT overridden here
};

int main() {
    Circle c;   // ❌ Error: Circle is still abstract because area() not overridden
    return 0;
}
