#include <stdio.h>
#include <stdlib.h>

// Linked list node
struct Node {
    int data;
    struct Node *next;
};

// Function to create a new node
struct Node *createNode(int new_data) {
    struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = NULL;

    // Print node information during creation
    printf("Created node: data = %d, address = %p, next = %p\n", 
            new_node->data, (void*)new_node, (void*)new_node->next);
    return new_node;
}


// Driver code
int main() {
    // Creating linked list: 100 -> 30 -> 10 -> 20 -> 10
    struct Node *head = createNode(100);
    head->next = createNode(30);
    head->next->next = createNode(10);
    head->next->next->next = createNode(20);
    head->next->next->next->next = createNode(10);
while(head!=NULL)
{
 printf(" data = %d, address = %p, next = %p\n", 
                 head->data, (void*)head,head->next);
                 
                  head = head->next;
}
 
}
