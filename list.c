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