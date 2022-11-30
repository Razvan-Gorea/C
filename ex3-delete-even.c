//Author: Razvan Gorea
//Brief: Write a program that prints all the odd numbers from the commandline,
//Then the program prints out the sum of all the odd numbers. 
//Approach: Creates an array of ints that is the same size as the arguement count minus 1,
//Then you add all the odd numbers to the newly created int array,
//you then iterate through the entire array summing up all the odd numbers in a total variable.
//lastly you add the total to the end of the array and iterate through the entire array printing everything followed by,
//newline characters.
//Date: 30/11/2022

//Function Prototypes
void sum(int *nums, int *cnt);
void printer(int *nums, int *cnt);
void sizer(int *nums, int argc, char **argv, int *cnt);

//Libraries
#include <stdio.h>
#include <stdlib.h>

//Main Function
int main(int argc, char **argv)
{
    int cnt = 0;
    int *ptr = NULL;
    int *nums = (int*)calloc(argc - 1, sizeof(int));

    //Function Calls
    sizer(nums, argc, argv, &cnt);
    sum(nums, &cnt);
    printer(nums, &cnt);


return 0;
}

//Function that sums up all the odd numbers and adds it the last position of the array
void sum(int *nums, int *cnt)
{
    int sum = 0;
    for (int i = 0; i < *cnt; ++i)
    {
        sum += nums[i];
    }
    nums[*cnt] = sum;
}

//Function that builds the array of all the odds numbers
void sizer(int *nums, int argc, char **argv, int *cnt)
{
for (int i = 1; i <= argc - 1; ++i)
    {
        if (atoi(argv[i]) % 2 != 0)
        {
            nums[*cnt] = atoi(argv[i]);//if the number is odd, add it to the array
            *cnt += 1; //Increases the cnt variable everytime a odd number is encountered
        }
    }
    //shinking of the array
    nums = (int*)realloc(nums, (*cnt + 1)*sizeof(int));
}

//Function that prints out all the elements of the array
void printer(int *nums, int *cnt)
{
    for (int i = 0; i < *cnt + 1; ++i)
    {
        printf("%d\n", nums[i]);
    }
}