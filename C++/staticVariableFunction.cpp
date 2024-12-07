#include <iostream>
using namespace std;

void countCalls() {
    static int count = 0;  // This variable will retain its value between function calls
    count++;
    cout << "Function called " << count << " times" << endl;
}

int main() {
    countCalls();  // Output: Function called 1 times
    countCalls();  // Output: Function called 2 times
    countCalls();  // Output: Function called 3 times
    return 0;
}

