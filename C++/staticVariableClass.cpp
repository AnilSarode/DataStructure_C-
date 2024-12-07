#include <iostream>
using namespace std;

class MyClass {
public:
    static int count;  // Declaration of static variable
    MyClass() {
        count++;
    }
};

int MyClass::count = 0;  // Definition of static variable outside the class

int main() {
    MyClass obj1, obj2, obj3;
    cout << "Total objects created: " << MyClass::count << endl;  // Output: 3
    return 0;
}

