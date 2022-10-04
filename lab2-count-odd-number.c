#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

int counter = 0;

    for (int i = 0; i <= argc -1; ++i){
        if (atoi(argv[i]) % 2 != 0){
            ++counter;
    }
}

printf("%d\n", counter);
return 0;
}