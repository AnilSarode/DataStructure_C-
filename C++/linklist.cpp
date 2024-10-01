#include <iostream>
using namespace std;

// Define the Node structure
struct Node {
    int data;        // Data part of the node
    Node* next;      // Pointer to the next node

    // Constructor to create a new node
    Node(int value) {
        data = value;
        next = nullptr;  // Initialize next as nullptr
    }
};

// Function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "nullptr" << endl;
}

int main() {
    // Creating nodes
    Node* node1 = new Node(10);  // Constructor sets next to nullptr
    Node* node2 = new Node(20);  // Constructor sets next to nullptr
    Node* node3 = new Node(30);  // Constructor sets next to nullptr

    // Linking nodes together
    node1->next = node2;  // node1 points to node2
    node2->next = node3;  // node2 points to node3

    // Print the linked list
    printList(node1);  // Output: 10 -> 20 -> 30 -> nullptr

    return 0;
}
