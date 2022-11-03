//Author: Razvan Gorea
//Date: 3/11/2022
//Brief: Create a array of 'Info' instances, iterate through that array accessing every instance and verifying if it has a promotion.
//If the given instance meets the promotion requirement, apply the discount,
//Otherwise, don't apply the discount
//Afterwards then add the cost onto to the overall total cost
//Then overall total cost followed by a newline

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

//Function that verifies the each instance for the promotion, and applies the correct procedure
void display(int *total, Info *groceries){
    float cost = 0;
    for (int i = 0; i < *total; ++i){
        //if promotion isn't met, just add the cost without discount onto the total overall cost
        if (groceries[i].promotion == 0){
            cost += (groceries[i].amount * groceries[i].price);
        }
        //if promotion is met, apply the discount and add the cost onto the total overall cost
        else if (groceries[i].promotion == 1){
            int tmp1 = (groceries[i].amount * groceries[i].price);
            int tmp_amount = (groceries[i].amount / 3);
            int tmp2 = (groceries[i].price * tmp_amount);
            cost += (tmp1 - tmp2);
        }
    }
printf("%.2f\n", cost);
}