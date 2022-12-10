//Author: Razvan Gorea
//Brief: Write a program the creates a list of structures,
//with its relevant members taken from the commandline,
//if the country 'Ireland' is encountered, increase the price by 20%
//finally the program prints all the members of all the structs
//Approach: Create the list of structs dynamically, then create each individual struct through iteration,
//taking in the information of each member of each struct from the commandline,
//once the structs are created, iterate through each and find which structs are Ireland,
//if they are Ireland, then increase the price member of those particular structs by 20%
//Date: 30/11/2022

//Libraries
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//Structure Defined with relevant members
typedef struct
{
	char *code;
	char *country;
    unsigned int price;
}Country;

//Function Prototypes
void country_creator(Country *countries, int count, char **indexer);
void price_increase(Country *countries, int count);
void printer(Country *countries, int count);

//Main Function
int main(int argc, char*argv[])
{
    char **indexer = &argv[1];
    int count = (argc - 1) / 3;
    Country *countries = (Country*)malloc(sizeof(Country) * count);

    //Function Calls
    country_creator(countries, count, indexer);
    price_increase(countries, count);
    printer(countries, count);
    return 0;
}


void //Function that creates each country struct
country_creator(Country *countries, int count, char **indexer)
{
    for (int i = 0; i < count; ++i)
    {
        countries[i] = (Country){ //Members being assigned to a struct
            .code = *(indexer + (i * 3)),
            .country = *(indexer + (i * 3) + 1),
            .price = atoi(*(indexer + (i * 3) + 2)),
        };
    }
}

void //Function that checks for every Ireland struct and increases the price member by 20% if found
price_increase(Country *countries, int count)
{
    for (int i = 0; i < count; ++i)
    {
        if (strcmp(countries[i].country, "Ireland") == 0)
        {
            countries[i].price = countries[i].price * 1.2;
        }
    }
}

void //Function that prints every member of all the structs
printer(Country *countries, int count)
{
    for (int i = 0; i < count; ++i)
    {
        printf("%s\n%s\n%d\n", countries[i].code, countries[i].country, countries[i].price);
    }
}
