#include "list.h"

typedef struct Node {
    int value;
    int position;
    struct Node *next;
} Node;

struct List {
    Node *head;
};

int findNode(List *list, int position, int *errorCode) {
    if (isEmpty(list) || position < 0) {
        *errorCode = -1;
        return 0;
    }
    Node *temp = list->head;

    for (int i = 1; i <= position; ++i) {
        temp = temp->next;
        if (temp == NULL) {
            *errorCode = -1;
            return 0;
        }
    }

    return temp->value;
}