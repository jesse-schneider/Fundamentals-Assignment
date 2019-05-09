#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "helpers.h"
#include "linkedList.h"


int main()
{
    FILE *inputfile = NULL;
    FILE *outfile = NULL;
    int count = 0;

   inputfile = fopen("united_states.txt", "r");
   outfile = fopen("united_states.histogram.txt", "w");

   int size = longestWord(inputfile);
   fseek(inputfile, 0, SEEK_SET);
   char name[size];

    if (inputfile == NULL)
    {
        printf("Error opening file. \n");
        return 1;
    }

    while (fscanf(inputfile, "%s", name) == 1)
    {
        int len = strlen(name);

        int valid = validWord(name, len);
        int *valptr = NULL;
        valptr = &valid;

        if (checkForDuplicates(name) == 1)
        {
            *valptr = 1;
        }

        if (valid == 0)
        {
            NODE *addToList = createNode(name, 1, size);
            insertAtHead(addToList);
            count++;
        }
    }
    printList(outfile);
    printf("Number of unique words found: %d \n", count);
    fclose(inputfile);
    fclose(outfile);
    return 0;
}
