//Author: Razvan Gorea
//Brief: Write a program taking a single integer commandline arguement, determine if the integer is a happy number or not.
//Approach: Iterate through each digit in the number one by one, passing each digit into an algorithm.
//The algorithm will apply the happy number conditions and determine if the integer is happy or not.
//The according output message will then be printed followed by a newline character.
//Date: 6th of October 2022

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Prototype Function called 'isHappyorNot'
int isHappyorNot(int number);

//Main Function 
int main(int argc, char *argv[]){
    int number = atoi(argv[1]);    
    int answer = number;    

    //If the answer isn't 1 or 4, run it again into the 'isHappyorNot' Function.    
    while(answer != 1 && answer != 4){    
        answer = isHappyorNot(answer);    
    }    
    //Prints out its respective message      
    if(answer == 1)    
        printf("is happy\n", number);     
    else if(answer == 4)    
        printf("not happy\n", number);     
     
    return 0;    


return 0;
}

int isHappyorNot(int number){
    int leftOver = 0;
    int total = 0;    
        
    while(number > 0){    
        leftOver = number % 10;    
        total = total + (leftOver * leftOver);//Applies the happy rule of squaring a given passed number then adding it onto the total  
        number = number / 10;    
    }    
    return total;   
}