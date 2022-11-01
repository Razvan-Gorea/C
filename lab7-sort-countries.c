//Author: Razvan Gorea
//Date: 1/11/2022
//Brief: sort list of countries based on their population in the descending order and print the result
//Approach: great the array of country instances and sort the array

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Countries Countries;

//Function Prototypes
void instanceMaker(int argc, char *argv[], int *total, Countries *countries); //Function that adds info from the commandline to a collection of instances
void sort(int *total, Countries *countries);
void display(int *total, Countries *countries); // Function that prints the table
void swapCountries(Countries* arr, int a, int b);

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

    //Function Calls
    instanceMaker(argc, argv, pelc, pcountries);
    sort(pelc, pcountries);
    display(pelc, pcountries);
    return 0;\
}

//Function that creates the array of country instances
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

//Sort function
void sort(int *total, Countries *countries){
    short clean_run;
    do {
        clean_run = 1;
        for (int i = 1; i < *total; i++){
            if (countries[i-1].population < countries[i].population) {
                swapCountries(countries, i, i-1);
                clean_run = 0;
            }
        }
    } while (!clean_run);
}

//Function that prints the instances of the 'countries' array in a specified format
void display(int *total, Countries *countries)
{
    printf("Country\t\t\tCapital\t\t\tSize\t\t\tPopulation\n");
    for (int i = 0; i < *total; i++)
    {
        printf("%s\t\t\t%s\t\t\t%d\t\t\t%.2f\n", countries[i].name, countries[i].capital, countries[i].size, countries[i].population);
    }
}

//Function containing swap (bubble sort) algorithm
void swapCountries(Countries* arr, int a, int b){
    Countries temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}