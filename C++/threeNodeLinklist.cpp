// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

struct node{
  int data;
  struct node *link;
};


int main() {

    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    head->data =45;
    head->link =NULL;
    
    struct node *current = (struct node *)malloc(sizeof(struct node));
    current->data =98;
    current->link=NULL;
    head->link = current;
    
    
    current = (struct node *)malloc(sizeof(struct node));
    current->data =100;
    current->link =NULL;
    head->link->link =current;
    
    // Print the address stored in head (address of the first node)
    printf("Address of first node (stored in head): %p\n", head);
    printf("Address of second node (stored in head link): %p\n", head->link);
    printf("Address of thrid node (stored in head link): %p\n", head->link->link);
    // Print the values
    printf("Data: %d\n", head->data);
    printf("Link: %p\n", head->link); // Use %p to print pointer address (NULL in this case)

        // Print the values using first node 
    printf("Data: %d \n", head->link->data);
    printf("Link: %p\n", head->link->link); 
    
    printf("Data: %d \n", current->data);
    printf("Link: %p\n", current->link); 
    
    printf("Data: %d \n", head->link->link->data);
    printf("Link: %p\n", head->link->link->link); 

    return 0;
}
