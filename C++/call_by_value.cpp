#include <iostream>
using namespace std;

void modify(int x) {
    x = x + 10;
    cout << "Inside modify (call by value): " << x << endl;
}

int main() {
    int a = 5;
    modify(a);
    cout << "After modify (call by value): " << a << endl;  // a remains 5
    return 0;
}
