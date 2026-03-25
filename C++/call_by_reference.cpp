#include <iostream>
using namespace std;

void modify(int &x) {
    x = x + 10;
    cout << "Inside modify (call by reference): " << x << endl;
}

int main() {
    int a = 5;
    modify(a);
    cout << "After modify (call by reference): " << a << endl;  // a becomes 15
    return 0;
}
