#include "list.h"

typedef struct Node {
    int value;
    int position;
    struct Node *next;
} Node;

struct List {
    Node *head;
};

bool isEmpty(List* list) {
    return list->head == NULL;
}

int clear(List* list) {
    while (!isEmpty(list)) {
        int errorCode = 0;
        delete(list, &errorCode);
    }
}

int changeNode(List* list, int position, int value) {
    if (isEmpty(list)) {
        return -1;
    }

    Node* walker = list->head;
    while (walker->position != position) {
        if (walker->next == NULL) {
            return -1;
        }
        walker = walker->next;
    }

    walker->value = value;
    return 0;
}