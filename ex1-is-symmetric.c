//Author: Razvan Gorea.
//Brief: Write a program that takes a string as input and tells you if it's symmetric.
//If the string is symmetric, print out yes, otherwise print out no.
//Approach: take in the string, iterate from the back and the front at the same time, iterate by 1 from both ends and comparing the characters.
//Date: 6th of October 2022

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Prototype functions called 'checker' and 'middle'.
void checker(int result, char *argv[]);
int middle(int argc, char *argv[]);

//Main function.
int main(int argc, char *argv[]){
    int result = 0;
    result = middle(argc, argv);
    checker(result, argv);
return 0;
}

//Checks the string by starting at the edges of the string and iterating inwards towards the middle of the string, comparing characters along the way.
//If the characters don't match up then the checker gets switched.
//At the end the checker determines which print statement gets executed.
//Warning!!!! This solution has a bug which I couldn't solve.
//Given a string with a space in it, there's a high chance the output might be wrong so beware!
void checker(int result, char *argv[]){
    int line2 = strlen(argv[1]);
    int checker = 0;
    int end1 = 0;
    int end2 = result;

    while (end1 < result && end2 < line2){
        if (argv[1][end1] == argv[1][end2]){
            end1 += 1; //Indexing incrementation
            end2 += 2;//Indexing incrementation
        }
        else{
            checker = 1;
            break;
        }
    }
if (checker == 0){
    printf("yes\n");// Yes, string is symmetrical
}
else{
    printf("no\n");//No, string is not symmetrical
}
}

//Middle function checks the string's length and carries out an operation afterwards. Returning an int value.
int middle(int argc, char *argv[]){
    int line = strlen(argv[1]);
    int mid = 0;

    if (line % 2 == 0){
        mid = (line / 2) + 1;
        return mid;
    }
    else{
        mid = (line / 2);
        return mid;
    }
}