#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Function declarations
int *sort(int *arr, int argc, char *argv[]);
void printer(int *arr, int argc);

int
main(int argc, char *argv[])
{// Function calls
    int arr[argc - 1];
    sort(arr, argc, argv);
    printer(arr, argc);
}

int * // Creates the 'arr' array composed of integer elements
sort(int *arr, int argc, char *argv[])
{
    for (int i = 1; i < argc; ++i){
        arr[i] = atoi(argv[i]);
                                  } 

    
    // bubble sort algorithm to sort the array in ascending order
    int holder;
    for (int i = 1; i < argc; i++) {     
        for (int j = i+1; j < argc; j++) {     
           if(arr[i] > arr[j]) {    
               holder = arr[i];    
               arr[i] = arr[j];    
               arr[j] = holder;}         }
                                   }
}

//Prints the sorted array
void printer(int *arr, int argc){
    for(int i = 1; i < argc; ++i){
        printf("%d\n", arr[i]);  }
}