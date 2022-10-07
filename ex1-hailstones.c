//Author: Razvan Gorea
//Brief: The program takes a single commandline arguement, the hailstone rules are then applied repeatedly until the it reaches the number 1.
//All the hailstone numbers created, get printed out.
//Approach: Implement a function that has a while block, the block executes a specific action through each iteration depending on whether the number being passed is even or odd.
//Date: 6th of October 2022

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Prototype Function called 'hailstones'
int hailstones(int argc, char *argv[]);


//Main Fucntion
int main(int argc, char *argv[]){
    hailstones(argc, argv);
return 0;
}


//Hailstones Function that carries out the hailstone rules, printing as long as the given conditions are true.
int hailstones(int argc, char *argv[]){
    int num = atoi(argv[1]);
    while (num >= 1){
        if (num % 2 == 0 && num > 1){
            printf("%d ", num);
            num = num / 2;
        }
        else if (num % 2 != 0 && num > 1){
            printf("%d ", num);
            num = (3 * num) + 1;
        }
        else if (num == 1){
            printf("%d\n", num);
            break;
        }
    }
}