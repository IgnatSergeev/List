#include "list.h"

typedef struct Node {
    int value;
    int position;
    struct Node *next;
} Node;

struct List {
    Node *head;
};

void print(List *list) {
    Node *temp = list;
    printf("The list is: ");
    while(temp->next != NULL)
    {
        printf("%d ", temp->value);
        temp = temp->next;
    }
    printf("%d ", temp->value);
    printf("\n");
}//