#include <stdio.h> 
#include <stdlib.h> 
  
struct Node 
{ 
  int data; 
  struct Node *next; 
}; 

void insert_node(struct Node** head_ref, int new_data) 
{ 
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 
    struct Node *last = *head_ref;
    new_node->data  = new_data; 
    new_node->next = NULL; 
    if (*head_ref == NULL) 
    { 
       *head_ref = new_node; 
       return; 
    } 
    while (last->next != NULL) 
        last = last->next; 
    last->next = new_node; 
    return; 
} 

void delete_node(struct Node **head_ref, int key) 
{ 
    struct Node* temp = *head_ref, *prev; 
    if (temp != NULL && temp->data == key) 
    { 
        *head_ref = temp->next;   
        free(temp);               
        return; 
    } 
   
    while (temp != NULL && temp->data != key) 
    { 
        prev = temp; 
        temp = temp->next; 
    } 
    if (temp == NULL) return; 
    prev->next = temp->next; 
    free(temp);  
} 
   
void print_list(struct Node *node) 
{ 
  while (node != NULL) 
  { 
     printf(" %d ", node->data); 
     node = node->next; 
  } 
} 
  
int main() 
{ 
  struct Node* head = NULL; 
  insert_node(&head, 6);    // example of insertion
  insert_node(&head, 18);   // example of insertion
  insert_node(&head, 4);    // example of insertion
  insert_node(&head, 33);    // example of insertion
  delete_node(&head, 2);    // example of deletion
  insert_node(&head, 15);    // example of insertion
  
  printf("\nLinked list is: "); 
  
  print_list(head); 
  
  return 0; 
}