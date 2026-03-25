#include <iostream>
using namespace std;

void pointerExample() {
    int a = 10;
    int b = 20;
    int* ptr = &a;  // Pointer points to a
    cout << "Pointer before: " << *ptr << endl;
    
    ptr = &b;       // Pointer now points to b
    cout << "Pointer after: " << *ptr << endl;
}

void referenceExample() {
    int a = 10;
    int b = 20;
    int& ref = a;   // Reference to a
    cout << "Reference before: " << ref << endl;

    // ref = &b; ❌ Error: can't rebind a reference
    ref = b;        // Assigns value of b to a, not rebind
    cout << "Reference after assigning b: " << ref << endl;
    cout << "Value of a: " << a << " (changed!)" << endl;
}

int main() {
    pointerExample();
    referenceExample();
    return 0;
}
