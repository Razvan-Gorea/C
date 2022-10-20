//Author: Razvan Gorea
//Brief: A program that uses struct to carry out multiple calcuations, uses two numbers taken from the first and second argument.
//Approach:
//Date: 20/10/2022
//Use -lm when compling with gcc

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

//Function Prototypes
float sum(float, float);
float diff(float, float);
float prod(float, float);
float divide(float, float);
float power(float, float);
float nat_log(float, float);

int
main(int argc, char *argv[])
{   
    float first_num = atof(argv[1]); // First float number from arguement 1
    float second_num = atof(argv[2]); // Second float number from arguement 2
    float result = 0; //Used to hold results

    float (*pfunction)(float, float); // Function Pointer Declaration
    
    pfunction = sum; //Points to Function sum()
    result = pfunction(first_num, second_num);
    printf("%.2f\n", result);

    pfunction = diff; //Points to Function diff()
    result = pfunction(first_num, second_num);
    printf("%.2f\n", result);

    pfunction = prod; //Points to Function prod()
    result = pfunction(first_num, second_num);
    printf("%.2f\n", result);

    pfunction = divide; //Points to Function divide()
    result = pfunction(first_num, second_num);
    printf("%.2f\n", result);

    pfunction = power; //Points to Function power()
    result = pfunction(first_num, second_num);
    printf("%.2f\n", result);

    pfunction = nat_log; //Points to Function nat_log()
    result = pfunction(first_num, second_num);
    printf("%.2f\n", result);


return 0;
}


//Functions to carry out calculations
float sum(float first, float second)
{
    return first + second;
}

float diff(float first, float second)
{
    return first - second;
}

float prod(float first, float second)
{
    return first * second;
}

float divide(float first, float second)
{
    return first / second;
}

float power(float first, float second)
{
    return pow(first, second); //First number to be powered by the second number
}    

float nat_log(float first, float second){
    return log(first) + log(second); //log of the first number plus the log of the second number
}