//Author: Razvan Gorea
//Brief: create a program to print the countries that has a size less than 100000km 
//Approach: take in the data from the command line and create instances, use the size member of each country instance to determine if it should be printed.
//Date: 1\11\2022

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Countries Countries;

void instanceMaker(int argc, char *argv[], int *total, Countries *countries); //Function that adds info from the commandline to a collection of instances
void checker(int *total, int *passed, Countries *valids, Countries *countries);
void display(int *total, Countries *valids);

struct Countries
{
    char name[30];
    char capital[30];
    float population;
    int size;
};

int main(int argc, char *argv[]){
    int elc = 0;
    int to_be_printed = 0;
    int *pelc = &elc;
    int *pto_be_printed = &to_be_printed;
   
   
    Countries countries[50];
    Countries valids[50];
    Countries *pcountries = countries;
    Countries *pvalids = valids;


    instanceMaker(argc, argv, pelc, pcountries);
    checker(pelc, pto_be_printed, pvalids, pcountries);
    display(pto_be_printed, pvalids);

return 0;
}

void instanceMaker(int argc, char *argv[], int *total, Countries *countries)
{
    for (int i = 1; i < argc - 1; i += 4)
    {
        Countries c;
        strcpy(c.name, argv[i]);
        strcpy(c.capital, argv[i + 1]);
        c.size = atoi(argv[i + 3]);
        c.population = atof(argv[i + 2]);
        countries[*total] = c;
        (*total)++;
    }
}

void checker(int *total, int *passed, Countries *valids, Countries *countries){
    for (int i = 0; i < *total; ++i){
        if (countries[i].size < 100000){
            valids[*passed] = countries[i];
            (*passed)++;
        }
    }
}

void display(int *total, Countries *valids){
    if (*total > 0){
        printf("Country\t\t\tCapital\t\t\tSize\t\t\tPopulation\n");
        for (int i = 0; i < *total; ++i){
            printf("%s\t\t\t%s\t\t\t%d\t\t\t%.2f\n", valids[i].name, valids[i].capital, valids[i].size, valids[i].population);
        }
    }
}