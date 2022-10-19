//Author:Razvan Gorea
//Brief:Program to find the character of the first argv in the string present in the second string
//Approach: Iterate through each character in the string, present in the second argv. Using a counter, increment when matched with the character being searched.
//Date: 18th of October 2022

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void finder(int *counter, char *first, char *second);

int
main(int argc, char *argv[])
{
int count = 0;
int *pcount = &count;

char first = argv[1][0];
char *pfirst = &first;

char *psecond = argv[2];

finder(pcount, pfirst, psecond);
printf("%d\n", count);
return 0;
}

void finder(int *counter, char *first, char *second){
    for (int i = 0; i < strlen(second); ++i){
        if (*first == second[i]){
            (*counter)++;
        }
    }
}