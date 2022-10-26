//Author: Razvan Gorea
//Date: 26/10/2022

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Countries Countries;

void instanceMaker(int argc, char *argv[], int *total, Countries *countries); //Function that adds info from the commandline to a collection of instances

void display(int *total, Countries *countries); // Function that prints the table

struct Countries
{
    char name[30];
    char capital[30];
    float population;
    int size;
};

int main(int argc, char *argv[])
{
    int elc = 0;
    int *pelc = &elc;
    Countries countries[50];
    Countries *pcountries = countries;


    instanceMaker(argc, argv, pelc, pcountries);
    display(pelc, pcountries);
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

void display(int *total, Countries *countries)
{
    printf("Country\t\t\tCapital\t\t\tSize\t\t\tPopulation\n");
    for (int i = 0; i < *total; ++i)
    {    //Access a specific instance based on index and print the members in the specified style
        printf("%s\t\t\t%s\t\t\t%d\t\t\t%.2f\n", countries[i].name, countries[i].capital, countries[i].size, countries[i].population);
    }
    
    //For loop to get the total population of all instances combined
    float avg = 0;
    for (int i = 0; i < *total; ++i){
        avg = avg + countries[i].population;
    }
    avg = avg / *total;
    printf("Population average: %.2f\n", avg);
}
