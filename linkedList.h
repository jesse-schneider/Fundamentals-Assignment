#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifndef LINKED_LIST
#define LINKED_LIST

struct Node {
   int count;
   char *word;
   struct Node *next;
}; typedef struct Node NODE;

int checkForDuplicates(char word[]);
void printList(FILE *outfile);
void insertAtHead(NODE *newNode);
NODE * createNode(char wordIn[], int size);

#endif //LINKED_LIST