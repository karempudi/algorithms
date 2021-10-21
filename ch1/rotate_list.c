#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode {
    int val;
    struct ListNode *next;
} node;

int main() {
    printf("Rotate a linked list\n");
    node* head = NULL;
    head = (node *) malloc(sizeof(node));
    if (head == NULL) {
        return 1;
    }
    head->val = 1;
    head->next = NULL;

    printf("Head: %d\n", head->);
 
    return 0;
}


