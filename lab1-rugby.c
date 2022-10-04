#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
    int try;
    int conversion;
    int penalty;
    int dropgoal;
    int total;
    try = atoi(argv[1]);
    conversion = atoi(argv[2]);
    penalty = atoi(argv[3]);
    dropgoal = atoi(argv[4]);
    total = (try * 5) + (conversion * 2) + (penalty * 3) + (dropgoal * 3);
    printf("%d\n", total);
    return 0;
}
