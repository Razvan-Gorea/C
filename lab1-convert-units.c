#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    float centimetres = 0.0;
    float inches = 2.54;
    float result;
    centimetres = atoi(argv[1]);
    result = centimetres / inches;
    printf("%.2f\n", result);
    return 0;
}