#include <iostream>
using namespace std;

inline int multiply(int a, int b) {
    return a * b;
}

int main() {
    int result = multiply(3, 4);  // The call is replaced by the code: int result = 3 * 4;
    cout << "Result: " << result << endl;  // Output: Result: 12
    return 0;
}

