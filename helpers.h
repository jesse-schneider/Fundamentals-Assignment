#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifndef PROG_FUND_HELPERS_H
#define PROG_FUND_HELPERS_H

int longestWord(FILE *inputfile);
void initArray(int wordCount, int **array);
int countHistWords(FILE *histfile,  int histMaxWord);
int validWord(char name[], int len);
int skipSpaces(int i, char *str);
void checkInfile(FILE *infile, char *filename);
void sort(int topTen[], int topTenIndex[], int wordCount);
void populateCorrelation(FILE *infile, int wordCount, int **correlation);
int findLargestLine(FILE *inputfile);
void ammendFileNames(char *filename, char *correlationFilename, char *histFilename);

#endif //PROG_FUND_HELPERS_H
