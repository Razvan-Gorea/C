//Author: Razvan Gorea
//Program to print the highest or smallest arguement depending on choice. (Arguments consists of floats)
//Brief:Write a program ex1-largest-smallest.c which accepts a requirement and an array of float numbers. The first argument is a requirement which can be largest or smallest. The following arguments are a set of floating numbers. If the requirement is largest, the program find the largest element in the array and print it. If the requirement is smallest, the program find the smallest element in the array and print it. Limit the displayed float number to 2 digits after the decimal point.
//Approach: If arguement 1 is 'highest', print the highest float number, else print the lowest float number.
//Date: 6th of October 2022

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Prototype functions called 'max' and 'low'
float max(int argc, char *argv[]);
float low(int argc, char *argv[]);



int main(int argc, char *argv[]){
    char str1[50] = "largest";
    if (strcmp(argv[1], str1) == 0){//Compares the first arguement with "largest" and based on the output it calls that required function
        printf("%.2f\n", max(argc, argv));
    }
    else{// prints the returned float to two decimal places
        printf("%.2f\n", low(argc, argv));
    }
return 0;
}


//Max function that finds the largest arguement
float max(int argc, char *argv[]){
    float highest = 0;
    float num;
    for (int i = 1; i < argc; ++i){ 
        num = atof(argv[i]);
        if (num > highest){
            highest = num;
        }
    }
return highest;
}

//low function that finds the smallest arguement
float low(int argc, char *argv[]){
    float lowest = 999.99;
    float num;
    for (int i = 2; i < argc; ++i){ 
        num = atof(argv[i]);
        if (num < lowest){ 
            lowest = num;
        }
    }
return lowest;
}