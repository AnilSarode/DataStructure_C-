#include <iostream>
#include <stack>
#include <utility>  // For std::pair
using namespace std;

int main() {
    // Initialize a stack of pairs (int, int)
    stack<pair<int, int>> myStack;

    // Push pairs into the stack
    myStack.push(make_pair(1, 10));
    myStack.push(make_pair(2, 20));
    myStack.push(make_pair(3, 30));

    // Display the top element (pair)
    cout << "Top element is: (" << myStack.top().first << ", " << myStack.top().second << ")" << endl;

    // Pop the top element
    myStack.pop();

    // Display the new top element
    cout << "Top element after pop: (" << myStack.top().first << ", " << myStack.top().second << ")" << endl;

    // Check if the stack is empty
    if (myStack.empty()) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack is not empty." << endl;
    }

    return 0;
}

