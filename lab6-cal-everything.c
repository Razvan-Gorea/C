//Author: Razvan Gorea
//Brief: A program that uses struct to carry out multiple calcuations, uses two numbers taken from the first and second argument.
//Approach:
//Date: 20/10/2022

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

typedef struct Calc Calc;

struct Calc 
{
    float first_num;
    float second_num;
};


int
main(int argc, char *argv[])
{
    Calc set1 = {atof(argv[1]), atof(argv[2])};
    
    float sum = set1.first_num + set1.second_num;
    float diff = set1.first_num - set1.second_num;
    float prod = set1.first_num * set1.second_num;
    float div = set1.first_num / set1.second_num;
    float power;
    power = pow(set1.first_num, set1.second_num);
    float log_num1;
    float log_num2;
    float result;
    log_num1 = log(set1.first_num);
    log_num2 = log(set1.second_num);
    result = log_num1 + log_num2;

    printf("%.2f\n", sum);
    printf("%.2f\n", diff);
    printf("%.2f\n", prod);
    printf("%.2f\n", div);
    printf("%.2f\n", power);
    printf("%.2f\n", result);

    return 0;
}
