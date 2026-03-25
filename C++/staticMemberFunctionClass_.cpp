#include <iostream>
#include <string>

using namespace std;

class Data {
public:
    static int x; // Declaration of static member variable
};

// Definition of static member variable
int Data::x = 0;

int main() {
    Data obj1;
    Data obj2;

    obj1.x = 100; // Updates the shared static variable
    obj2.x = 200; // Updates the shared static variable

    cout << obj1.x << "\n"; // Outputs 200
    cout << obj2.x << "\n"; // Outputs 200

    return 0;
}
