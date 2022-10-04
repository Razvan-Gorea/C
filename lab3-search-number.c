#include <stdio.h>
#include <stdlib.h>

int numberSearch (int argc, char *argv[]);

int main(int argc, char *argv[]){
    numberSearch(argc, argv);
}

int numberSearch(int argc, char *argv[]){
    int checker = 0;
    int num;
    num = atoi(argv[1]);
    int comparisonHolder;

    for (int i = 2; i < argc; ++i){
        comparisonHolder = atoi(argv[i]);
        if (num == comparisonHolder){
            printf("Found %d at %d\n", num, i - 2);
            checker = 1;
            break;
        }
        }
if (checker == 0){
    printf("%d not found\n", num);
}

return 0;
}