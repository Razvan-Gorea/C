//Author:Razvan Gorea
//Brief:Program to find the character of the first argv in the string present in the second string
//Approach: Iterate through each character in the string, present in the second argv. Using a counter, increment when matched with the character being searched.
//Date: 18th of October 2022

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int
main(int argc, char *argv[])
{
int count = 0; //Count to store the amount of times it finds the character match
for (int i = 0; i < strlen(argv[2]); ++i){
    if (argv[1][0] == argv[2][i]){
        ++count; //If the character is found increase count by 1
    }
}
printf("%d\n", count);
return 0;
}
