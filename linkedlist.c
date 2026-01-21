#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int number;
    struct node *next;
} node;

int main(void) {
    int number = 0;

    node* list = NULL;

    for (int i=0;i<=5;i++) {
        node* new_node = malloc(sizeof(node));
        new_node->number=i;
        new_node->next = NULL;

        if (new_node == NULL) {
            return 1;
        }
       
        if (list == NULL) {
            list = new_node;
        } else {
            for (node* ptr=list;ptr!=NULL;ptr=ptr->next) {
                if (ptr->next == NULL) {
                    ptr->next = new_node;
                    break;
                }
            }
        }
    }


    node* ptr = list;

    // while (ptr!= NULL) {
    //     printf("\n%i", ptr->number);
    //     ptr = ptr->next;
    // }

    node* next_ptr = list;
    while (ptr!= NULL) {
        next_ptr = ptr->next;
        free(ptr);
        ptr = next_ptr;
    }
    
    return 0;
}