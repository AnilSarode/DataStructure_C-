// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

struct node{
   int data;
   struct node *link;
 
};

int main() {
    // Write C code here
    struct node * head = NULL;
    head = (struct node *)malloc(sizeof(struct node));  
   
    (*head).data =45;
    (*head).link = NULL;
    
    // Assign values to the node using -> operation
    // head->data = 45;
    // head->link = NULL;
  
    // Print the address stored in head (address of the first node)
    printf("Address of first node (stored in head): %p\n", head);
  
    // Print the values
    printf("Data: %d \n", head->data);
    printf("Link: %p\n", head->link); // Use %p to print pointer address (NULL in this case)
   
   
    return 0;
}
