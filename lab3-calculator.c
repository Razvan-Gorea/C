#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cal(char process[20], float num1, float num2); // calculation function takes 3 parameters, the calculation type,
// the first float number, and the second float number
int main(int argc, char *argv[]){
    float num1;
    float num2;
    num1 = atof(argv[2]); // switches type of argument 2 to a float
    num2 = atof(argv[3]);// switches type of argument 3 to a float
    cal(argv[1], num1, num2); // function call
    return 0;
}




void cal(char method[20], float num1, float num2){ // cal function assigning the type to each of the three parameters
    char multiply[20] = "multiply";
    char divide[20] = "divide";
    float answer;
    if (strcmp(method, multiply) == 0){ // comparing the calculation type and carries out the following operations if true
        answer = num1 * num2;
        printf("%f\n", answer);
    }
    else if (strcmp(method, divide) == 0){// comparing the calculation type and carries out the following operations if true
        if (num1 != 0 && num2 != 0){
            answer = num1 / num2;
            printf("%f\n", answer);
        }
        else{
            printf("invalid\n"); // if the calculation can't be done print invalid
        }
    }
}