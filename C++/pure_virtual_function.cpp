#include <iostream>
using namespace std;

class Shape {       // Abstract class
public:
    virtual void draw() = 0; // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle\n";
    }
};

int main() {
    // Shape s;  // ❌ Error: Cannot instantiate abstract class
    Circle c;     // ✅ Works
    c.draw();
    return 0;
}
