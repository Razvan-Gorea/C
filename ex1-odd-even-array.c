//Author: Razvan Gorea
//Approach: iterate through each argument determining whether it's even or odd and add them onto their respective totals
//Brief: Write a program that prints two totals, one even total and the other being a odd total. Each total follows a newline character. The totals are based off the commandline integer arguements.
//Date: 6th of October 2022

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Prototype Functions called 'odd' and 'even'.
void odd(int argc, char *argv[]);
void even(int argc, char *argv[]);

//Main Function
int main(int argc, char *argv[]){
    odd(argc, argv);
    even(argc, argv);
return 0;
}


//Odd function that adds all odd command line integer into a total. The total then gets printed followed by a newline.
//If no odd integers are found. The function prints '0' followed by a newline character.
void odd(int argc, char *argv[]){
    int total = 0;
    for (int i = 1; i < argc; ++i){
        if (atoi(argv[i]) % 2 != 0){
            total = total + atoi(argv[i]);
        }
    }
printf("%d\n", total);
}



//Even function that tries to find the first even integer command line arguement. Once found it then subtracts the rest of the even numbers and keeps a total.
//The total gets printed at the end followed by a newline character.
//If no even integers are found. The function prints '0' followed by a newline character.
void even(int argc, char *argv[]){
    int checker = 0;
    for (int i = 1; i < argc; ++i){
        if (checker == 0 && atoi(argv[i]) % 2 == 0){
            checker = atoi(argv[i]);
        }
        else if (checker != 0 && atoi(argv[i]) % 2 == 0){
            checker = checker - atoi(argv[i]);
        }
    }
printf("%d\n", checker);
}
