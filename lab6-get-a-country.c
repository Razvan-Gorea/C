//Author: Razvan Gorea
//Brief: Read data of a country from the command line, assign the argvs to the members amd print out the members at the end.
//Approach: by out the information from the command line through the use of a struct
//Date: 21/10/2022

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//'Country' Structure
typedef struct
{
    char name[30];
    char capital[30];
    char population[30];
    char size[30];
}Country;

void printer(Country country, char *argv[]);


int
main(int argc, char *argv[]){
    Country ireland; //Ireland is an instance of the 'Country' type
    printer(ireland, argv);

return 0;
}

//Function that copies the values from the arguements on the commandline to their allocated member of 'country'
void printer(Country country, char *argv[]){
    strcpy(country.name, argv[1]);
    strcpy(country.capital, argv[2]);
    strcpy(country.population, argv[3]);
    strcpy(country.size, argv[4]);
    printf("%s\n", country.name);
    printf("%s\n", country.capital);
    printf("%s million people\n", country.population);
    printf("%s km2\n", country.size);
}