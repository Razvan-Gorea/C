//Author: Razvan Gorea
//Date: 21/11/2022
//Brief: A program which accepts the following arguments from the command line. 
//The first argument is the size of two vectors n. 
//The next n arguments are the elements of vector 1, and the last n arguments are the elements of vector 2. 
//The program calculates the dot product of the two vectors and prints the result.

//Libraries imported
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Function Prototypes
void vector1(char **argv, int elements, int *arr);
void vector2(char **argv, int elements, int *arr2);
void dotproduct(int *arr, int *arr2, int elements);

//Main Function
int main(int argc, char **argv){
    int elements = 0;
    elements = atoi(argv[1]); //Size of both each vector

    int *arr = malloc(elements * sizeof(int));
    int *arr2 = malloc(elements * sizeof(int));

    if (!arr || !arr2) //Check to see if memory got allocated successfully
    {
        printf("Failed to allocate memory");
    }
    //Function calls
    vector1(argv, elements, arr); 
    vector2(argv, elements, arr2);
    dotproduct(arr, arr2, elements);
}

//Function to create the first vector
void vector1(char **argv, int elements, int *arr)
{
    for (int i = 2; i <= elements + 1; ++i)
    {
        arr[i - 2] = atoi(argv[i]);

    }
}

//Function to create second vector
void vector2(char **argv, int elements, int *arr2)
{   
    for (int i = 2 + elements; i <= (elements + 1) + elements; ++i)
    {
          arr2[i - (2 + elements)] = atoi(argv[i]);
    }
}

//Function that gets the dot product of both vectors
void dotproduct(int *arr, int *arr2, int elements)
{
    int total = 0;
    for (int i = 0; i < elements; ++i)
    {
        total += arr[i] * arr2[i];
    }
    free(arr); 
    free(arr2);
    printf("%d\n", total);
}