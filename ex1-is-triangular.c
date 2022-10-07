//Author: Razvan Gorea
//Brief: Write a program that takes in a single integer commandline arguement, verify if it's triangular and print the according message.
//Approach: Take in the integer, pass it through an algorithm to verify it's triangular and print the according message. 
//Date: 6th of October 2022
#include <stdio.h>
#include <stdlib.h>

//Prototype Function called "triangular"
void triangular(int argc, char *argv[]);

//Main Function
int main(int argc, char *argv[]){
    triangular(argc, argv);//Function Call
}

//Triangular Function to check if the first interger commandline arguement is a triangular number.
//It's done by using the formula n(n + 1) / 2 = 'The integer from the commandline'.
//Starting at n value 1, each a value gets plugged in through each iteration.
//It's then compared to the desired number (The integer that's been checked).
//Depending on the formula's output, a specific operation is carried out in response.
//Using a integer checker variable, it can be determined if the number being checked is triangular.
//The function the prints the according message depending on if the checked number is triangular or not.
void triangular(int argc, char *argv[]){
    int checker = 0;
    for (int i = 1; ;++i){
        if ((i * (i + 1)) / 2 < atoi(argv[1])){
            ++i;
        }
        else if ((i * (i + 1)) / 2 > atoi(argv[1])){
            checker = 1;
            break;
        }
        else if ((i * (i + 1)) / 2 == atoi(argv[1])){
            break;
        }
        }
    if (checker == 0){//If checker is '0' then the number is triangular
        printf("%d is a triangular number\n", atoi(argv[1]));
    }
    else{//Otherwise, it's not triangular
        printf("%d is not a triangular number\n", atoi(argv[1]));
    }
    }