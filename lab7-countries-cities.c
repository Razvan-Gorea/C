//Author:
//Date:
//Brief:
//Approach:

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct City1 City1;
typedef struct City2 City2;
typedef struct City3 City3;
typedef struct Country Country;

void instanceMaker(int argc, char *argv[], int *total, Country *countries);
void display(int *total, Country *countries);

struct City1{
    char name[30];
    char size[30];
};

struct City2{
    char name[30];
    char size[30];
};

struct City3{
    char name[30];
    char size[30];
};

struct Country{
    char name[30];
    City1 city1;
    City2 city2;
    City3 city3;
};


int main(int argc, char *argv[]){
    int elc = 0;
    int *pelc = &elc;
    Country countries[50];
    Country *pcountries = countries;

    instanceMaker(argc, argv, pelc, pcountries);
    display(pelc, pcountries);
return 0;
}

void instanceMaker(int argc, char *argv[], int *total, Country *country){
    for (int i = 1; i < argc - 1; i += 7)
    {
        Country c;
        strcpy(c.name, argv[i]);
        strcpy(c.city1.name, argv[i + 1]);
        strcpy(c.city1.size, argv[i + 2]);
        strcpy(c.city2.name, argv[i + 3]);
        strcpy(c.city2.size, argv[i + 4]);
        strcpy(c.city3.name, argv[i + 5]);
        strcpy(c.city3.size, argv[i + 6]);
        country[*total] = c;
        (*total)++;
    }
}

void display(int *total, Country *countries){
    for (int i = 0; i < *total; i++)
    {
        printf("%s: %s\n", countries[i].name, countries[i].city1.name);
    }
}