//Author: Razvan Gorea
//Date: 25/10/2022

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Countries Countries;

struct Countries
{
    char name[30];
    char capital[30];
    float population;
    int size;
};

int main(int argc, char *argv[]){
    Countries countries[50];
    int elc = 0;
    for (int i = 1; i < argc - 1; i += 4){
        Countries c;
        strcpy(c.name, argv[i]);
        strcpy(c.capital, argv[i + 1]);
        c.size = atoi(argv[i + 3]);
        c.population = atof(argv[i + 2]);
        countries[elc] = c;
        elc++;
    }

    printf("Country\t\t\tCapital\t\t\tSize\t\t\tPopulation\n");
    for (int i = 0; i < elc; i++)
    {
        printf("%s\t\t\t%s\t\t\t%d\t\t\t%.2f\n", countries[i].name, countries[i].capital, countries[i].size, countries[i].population);
    }


return 0;
}