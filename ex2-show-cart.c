//Author: Razvan Gorea
//Date: 3/11/2022
//Brief: Create a array of 'Info' instances, iterate through that array accessing every instance and verifying if it has a promotion.
//If the given instance meets the promotion requirements then print the instance members in the set formatt required.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Info Info;

//Function Prototypes
void instance_maker(int argc, char* argv[], int* total, Info* groceries);
void display(int *total, Info *groceries);

//'Info Structure'
struct Info
{   //Members or Fields
    char item[20];
    unsigned int amount;
    float price;
    int promotion;
};

//Main Function
int main(int argc, char* argv[]){
    int elements = 0;
    int *pelements = &elements;
    Info groceries[100];
    Info *pgroceries = groceries;

    //Function calls
    instance_maker(argc, argv, pelements, pgroceries);
    display(pelements, pgroceries);

return 0;
}

//Function that creates instances of the 'Info' struct using data from the commandline (argv)
void instance_maker(int argc, char* argv[], int* total, Info* groceries){
    for (int i = 1; i < argc - 1; i += 4)
    {   
        //Assignment of data to members of an instance of the struct 'Info'
        Info gros;
        strcpy(gros.item, argv[i]);
        gros.amount = atoi(argv[i + 1]);
        gros.price = atof(argv[i + 2]);
        gros.promotion = atoi(argv[i + 3]);
        groceries[*total] = gros;
        (*total)++;
    }
}

//Function that verify and prints instances to the meet the promotion requirement
void display(int *total, Info *groceries){
    for (int i = 0; i < *total; ++i){
        if (groceries[i].promotion == 1){
            printf("%s,%i,%.2f,On Sale\n", groceries[i].item, groceries[i].amount, groceries[i].price);
        }
        else{
            printf("%s,%i,%.2f,No Sale\n", groceries[i].item, groceries[i].amount, groceries[i].price);
        }
    }
}