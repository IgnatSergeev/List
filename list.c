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