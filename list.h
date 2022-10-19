#pragma once

#include <stdbool.h>
#include <stdlib.h>

typedef struct List List;

int insert(List *list, int value);

void print(List *list);

int delete(List *list, int position);

int changeNode(List *list, int position, int value);

bool isEmpty(List *list);

int clear(List *list);

// find value by position in list, errorCode == -1 if position below zero or more than real size of list
int findNode(List *list, int position, int *errorCode);
