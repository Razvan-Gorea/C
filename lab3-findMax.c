#include <stdio.h>
#include <stdlib.h>

int findmax(int argc, char *argv[]); 


int main(int argc, char *argv[]){
       int answer;
       answer = findmax(argc, argv); // passing the argument count and the arguments array.
       printf("%d\n", answer);
return 0;
}

int findmax(int argc, char *argv[]){ // body of function 'findmax'
    int highest = 0;
    int num;
    for (int i = 1; i < argc; ++i){ // go in and check each interger arguement one by one, beginning at the first argument.
        num = atoi(argv[i]);
        if (num > highest){ 
            // if the number compared against the 'highest' is a higher number, make this new number the 'highest'.
            highest = num;
        }
    }
return highest; // return the highest number discovered from the array of arguements.
}