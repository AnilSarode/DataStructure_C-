#include <iostream>
using namespace std;

class MyClass {
public:
    static int staticVar;  // Static variable (shared across all instances)
    int nonStaticVar;      // Non-static variable (specific to each object)

    static void staticFunction() {
        cout << "Static variable: " << staticVar << endl;  // OK: Accessing static variable
        // cout << "Non-static variable: " << nonStaticVar << endl;  // Error: Cannot access non-static variable
    }

    void nonStaticFunction() {
        cout << "Static variable: " << staticVar << endl;  // OK: Non-static function can access static variables
        cout << "Non-static variable: " << nonStaticVar << endl;  // OK: Non-static function can access non-static variables
    }
};

int MyClass::staticVar = 10;  // Initialize static variable

int main() {
    MyClass obj;
    obj.nonStaticVar = 20;

    MyClass::staticFunction();  // Access static function
    obj.nonStaticFunction();    // Access non-static function

    return 0;
}

