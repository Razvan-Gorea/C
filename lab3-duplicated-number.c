#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void dups (int argc, char *argv[]);

int main(int argc, char *argv[]){

    dups(argc, argv);
    return 0;
}


void dups (int argc, char *argv[]){

    for (int i = 0; i < argc - 1; ++i){
        for (int j = i + 1; j < argc; ++j){
            if (atoi(argv[i]) == atoi(argv[j])){
                printf("%d\n", atoi(argv[i]));
                return;
            }
        }
    
    }

    printf("no duplicated number\n");   
}