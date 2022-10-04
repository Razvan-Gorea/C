#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int num;
    num = atoi(argv[1]);
    
    switch (num)
    {
    case 1:
        printf("Sunday\n");
        break;
    case 2:
        printf("Monday\n");
        break;
    case 3:
        printf("Tuesday\n");
        break;
    case 4:
        printf("Wednesday\n");
        break;
    case 5:
        printf("Thursday\n");
    case 6:
        printf("Friday\n");
    case 7:
        printf("Saturday\n");
    default:
        printf("Give a number between 1-7!\n");
        break;
    }
    return 0;
}