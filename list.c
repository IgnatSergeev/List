#include "list.h"

typedef struct Node {
    int value;
    int position;
    struct Node *next;
} Node;

struct List {
    Node *head;
};

int insert(List *list, int value, int position) {
    Node *currentNode = list->head;
    while (currentNode->position != position) {
        if (currentNode->next == NULL) {
            return -1;
        }
        currentNode = currentNode->next;
    }

    Node *newNode = malloc(sizeof(Node));

    newNode->value = value;
    newNode->position = currentNode->position;
    Node *nextNode = currentNode->next;
    newNode->next = nextNode;

    currentNode->next = newNode;
    while (currentNode != NULL) {
        ++currentNode->position;
        currentNode = currentNode->next;
    }
    return 0;
}

int delete(List* list, int position) {
    if (isEmpty(list)) {
        return -1;
    }
    Node* walker = list->head;
    while (walker->position != position - 1) {
        if (walker->next == NULL) {
            return -1;
        }
        walker = walker->next;
    }
    Node* temp = NULL;
    if (walker->next != NULL) {
        temp = walker->next->next;
        free(walker->next);
        walker->next = temp;
        return 0;
    }
    free(walker->next);
    return 0;
}

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