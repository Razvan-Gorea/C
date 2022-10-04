#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int num1;
    int num2;
    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);

    for(int i = 1; i <= num2; ++i){
    for(int i = 1; i <= num1; ++i){
        printf("*");
    }
    printf("\n");
    }
    return 0;
}