#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30, 40};

    cout << "Classic for loop:" << endl;
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";  // Access by index
    }
    cout << endl;

    cout << "Range-based for loop:" << endl;
    for (auto &num : numbers) {
        cout << num << " ";  // Access element directly
    }
    cout << endl;
}
