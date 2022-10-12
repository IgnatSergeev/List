#pragma once

#include <stdbool.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node *next;
} Node;

int insert(Node *head, int value);

void print(Node *head);

int delete(Node *head, int *errorCode);

int changeNode(Node *head, int value);

bool isEmpty(Node *head);

int clear(Node **head);

Node *findNode(Node **head, int position);
