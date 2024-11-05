#include <iostream>
#include <stack>  // Include stack library
using namespace std;

int main() {
    // Initialize a stack of integers
    stack<int> myStack;

    // Push elements into the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Display the top element
    cout << "Top element is: " << myStack.top() << endl;

    // Pop the top element
    myStack.pop();

    // Display the new top element
    cout << "Top element after pop: " << myStack.top() << endl;

    // Check if the stack is empty
    if (myStack.empty()) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack is not empty." << endl;
    }

    return 0;
}

