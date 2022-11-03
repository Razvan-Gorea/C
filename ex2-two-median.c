//Author: Razvan Gorea
//Date: 3/11/2022
//Brief: Convert the arguements from char to int, then put them into an integer array.
//Then sort the array from low to high and print the two middle indexes.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Function Prototypes
void converter(int length, char* argv[], int* parr);
void sort(int length, int* parr);
void display(int length, int* parr);


int main(int argc, char *argv[]){
    int length = argc - 1;
    int arr[length];
    int *parr = arr;
    
    //Function Calls
    converter(length, &argv[1], parr);
    sort(length, parr);
    display(length, parr);
return 0;
}


void converter(int length, char *argv[], int* parr){
    //For loop that converts the argruents into ints and puts them into an int array called 'parr'
    for (int i = 0; i < length; i++){
        parr[i] = atoi(argv[i]);
    }
}


void sort(int length, int* parr){
    int i;
    int j;
    int tmp; 
    // Sorting the numbers in the 'parr' array using pointers 
    for (i = 0; i < length - 1; i++){ 
        for (j = i + 1; j < length; j++){ 
            if (*(parr + j) < *(parr + i)){ 
  
                tmp = *(parr + i); 
                *(parr + i) = *(parr + j); 
                *(parr + j) = tmp; 
            } 
        } 
    }
}


void display(int length, int* parr){
    //Getting the positions of the middle of the array and printing those indexes
    int pos1, pos2;
    pos1 = (length / 2) - 1;
    pos2 = length / 2;
    printf("%d\n", parr[pos1]);
    printf("%d\n", parr[pos2]);
}