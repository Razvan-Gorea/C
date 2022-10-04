#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    float radius, area, height;
    float calc1, calc2, calc3;
    float PI = 3.1415;

 

    if (argc == 1){
        printf("No input given!");
    }
    else if (argc == 2){
        printf("Two arguements needed!");
    }
    else{
        radius = atoi(argv[1]);
        height = atoi(argv[2]);
        if (radius < 0 || height < 0){
        printf("The radious or height cannot be negative!");
        }
        else{
            /*calc1 = 2πrh;*/
            calc1 = 2.0 * PI * radius * height;
            /*calc2 = 2πr^2;*/
            calc2 = 2.0 * PI * radius;
            calc3 = calc2 * calc2;
            area = calc1 + calc3;
            printf("%.2f\n", area);
        }
    }
    return 0;
}