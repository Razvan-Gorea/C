//Author: Razvan Gorea
//Date: 3/11/2022
//Brief: Turn the necessary arguements into an int array, isolate the required elements of the array into another array.
//Finally iterate through the final array, adding up each integer into a total variable, then print the total.

//Function Prototypes
void converter(int length, char* argv[], int* parr);
void adder(int length, int* parr, int* pvalues, int* rows);
void total(int* rows, int* pvalues);

//Libraries
#include <stdio.h>
#include <stdlib.h>

//Main Function
int main(int argc, char* argv[]){
    //Arrays, lengths and array pointers
    int length = argc - 2;
    int rows = atoi(argv[1]);
    int arr[length];
    int values[length];
    int *parr = arr;
    int *pvalues = values;
    int *prows = &rows;
    int result;

    //Function Calls
    converter(length, &argv[2], parr);
    adder(length, parr, pvalues, prows);
    total(prows, pvalues);

return 0;
}

//Function that converts the arguement vector into an integer array called 'arr'
void converter(int length, char *argv[], int* parr){
     //For loop that converts the argruents into ints and puts them into an int array called 'parr'
    for (int i = 0; i < length; i++){
        parr[i] = atoi(argv[i]);
    }
}

//Function that finds the required integers to be later added up
void adder(int length, int* parr, int* pvalues, int* rows){
    for (int i = 0; i < *rows; ++i){
        pvalues[i] = parr[i * (*rows - 1) + (*rows - 1)];
    }
}

//Function that adds up required integers into a total variable, then finally prints the total variable
void total(int* rows, int* pvalues){
    int result = 0;
    for (int i = 0; i < *rows; ++i){
        result = result + pvalues[i];
    }
    printf("%d\n", result);
}