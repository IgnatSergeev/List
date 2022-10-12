#include <stdio.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

void Insert(Node **head, int x);
void Print(Node *head);

int main()
{
    return 0;
}