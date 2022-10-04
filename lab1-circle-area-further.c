#include <stdio.h>
#include <stdlib.h> 

int main(int argc, char *argv[])
{
    float PI = 3.14;
	int radius = 0;
	float area = 0.0;
    
	radius = atoi(argv[1]);
    
    if (radius < 0.0){
	printf("Incorrect Input, execute and try again!\n");
    }
    else {
    radius = radius*radius;
    }

	area = radius*PI;
    
    if (area <= 0){
        printf("Area not valid!\n"); 
    }
    else {
        printf("%.2f\n",area);
    }
    return (0);
}