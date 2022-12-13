//Author: Razvan Gorea
//Date: 13/12/2022
//Brief: Write a program that accepts information form the commandline and assign each to an item/product
//Using the information given, find the sales for each item/product then the status by comparing it against the average of sales for all the items/products
//Approach: 
//Create the list of items/products,
//Find the sales for each item,
//Find the average by adding up all the sales of all items then divide by the number of different items
//Find the status of each item by comparing it against the average,
//Print each of the statuses for every item, along with the country of origin

//Libraries
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//Structure Defined with relevant members
typedef struct
{//Members of the item/product struct
	char *code;
	unsigned int price;
    unsigned int items_num;
    unsigned sum;
    unsigned avg;
    char country[30];
    unsigned status;
}Product;

//Function Prototypes
void product_creator(Product *products, int count, char **indexer);
void sales(Product *products, int count);
void average(Product *products, int count);
void country_type(Product *products, int count);
void status(Product *prodcuts, int count);

//Main Function/Body
int main(int argc, char*argv[])
{
    char **indexer = &argv[1];
    int count = (argc - 1) / 3;
    Product *products = (Product*)malloc(sizeof(Product) * count);

    //Function Calls
    product_creator(products, count, indexer);
    sales(products, count);
    country_type(products, count);
    average(products, count);
    status(products, count);
    return 0;
}


void //Function that creates each product struct
product_creator(Product *products, int count, char **indexer)
{
    for (int i = 0; i < count; ++i)
    {
        products[i] = (Product){ //Members being assigned to a product struct
            .code = *(indexer + (i * 3)),
            .price = atoi(*(indexer + (i * 3) + 1)),
            .items_num = atoi(*(indexer + (i * 3) + 2)),
        };
    }
}


void //Function that calculates the sales for each of the product structs
sales(Product *products, int count)
{
    for (int i = 0; i < count; ++i)
    {
        int total = 0;
        total = products[i].price * products[i].items_num;
        products[i].sum = total;
    }
}

void //Function the calculates the average of all the sales of the structs
average(Product *products, int count)
{
    int total = 0;
    for (int i = 0; i < count; ++i)
    {
        total += products[i].sum;
    }
    total = total / count;
    
    for (int i = 0; i < count; ++i)
    {
        products[i].avg = total;
    }
}

void //Function that calls whether or not the sales of each struct
status(Product *products, int count)
{
    for (int i = 0; i < count; ++i)
    {
        if (products[i].sum >= products[i].avg)
        {
            products[i].status = 1;
        }else 
        {
            products[i].status = 0;
        }
    printf("%d\n%s\n", products[i].status, products[i].country);
    }
    
}

void //Function that takes the code of each struct and assigns its correlated country
country_type(Product *products, int count)
{
    for (int i = 0; i < count; ++i)
    {
        if (products[i].code[0] == 'I' && products[i].code[1] == 'E')
        {
            strcpy(products[i].country, "Ireland"); 
        }else if (products[i].code[0] == 'F' && products[i].code[1] == 'R')
        {
            strcpy(products[i].country, "France");
        }else if (products[i].code[0] == 'S' && products[i].code[1] == 'P')
        {
            strcpy(products[i].country, "Spain");
        }else if (products[i].code[0] == 'U' && products[i].code[1] == 'S')
        {
            strcpy(products[i].country, "USA");
        }else if (products[i].code[0] == 'R' && products[i].code[1] == 'U')
        {
            strcpy(products[i].country, "Russia");
        }
    }
}
