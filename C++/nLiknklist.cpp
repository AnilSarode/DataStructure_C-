#include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct node {
    int data;
    struct node *link;
};

// Function to create a new node
struct node *createNode(int value) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = value;
    newNode->link = NULL;
    return newNode;
}

// Main function to create a linked list and print it
int main() {
    int n, value;

    // Ask the user for the number of nodes
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    struct node *head = NULL;
    struct node *copy = NULL;

    // Creating the linked list
    for (int i = 0; i < n; i++) {
        printf("Enter the value for node %d: ", i + 1);
        scanf("%d", &value);

        struct node *temp = createNode(value);

        if (head == NULL) {
            head = temp;  // Set head for the first node
            copy = head;
        } else {
            copy->link = temp;  // Link the new node
            copy = copy->link;  // Move to the new node i.e. copy still hold the address of the head or current node so move ahead. 
        }
    }

    // Traversing and printing the list
    int j = 1;  // Node counter
    struct node *current = head;
    while (current != NULL) {
        printf("Node %d:\n", j);
        printf("  Address: %p\n", (void *)current);
        printf("  Data: %d\n", current->data);
        current = current->link;
        j++;
    }

    return 0;
}

