// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node * left;
    struct Node * right;
    
    Node(int val){
        data =val;
        left = NULL;
        right = NULL;
    }
    
};

void preorderTraversal(struct Node * root){
    if (root == NULL){
        return;
    }
    cout<< root->data <<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
    
    /*Recursion Flow: The flow of recursion is: 1 → 2 → 4 → NULL → NULL → 5 → NULL → NULL → 3 → 6 → NULL → NULL → 7 → NULL → NULL. */
}

// Inorder Traversal (Left, Root, Right)
void inorderTraversal(Node* root) {
    if (root == NULL) return; // Base case
    inorderTraversal(root->left); // Traverse left subtree
    cout << root->data << " "; // Visit root
    inorderTraversal(root->right); // Traverse right subtree
}
    
    /*The flow of recursion is: NULL → 4 → NULL → 2 → NULL → 5 → NULL → 1 → NULL → 6 → NULL → 3 → NULL → 7 → NULL.
}*/


void postorderTraversal(Node* root){
    if (root ==NULL) return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout<<root->data<<" ";
    
}
int main() {
    
    struct Node * root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    preorderTraversal(root);
    cout <<"\n";
    inorderTraversal(root);
    cout<< "\n";
    postorderTraversal(root);
    
    return 0;
}
