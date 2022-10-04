#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int counter = 0;
    for (int i = 1; i <= argc -1; ++i){
        if (atoi(argv[i]) % 2 == 0){
            printf("%d - %d\n", i - 1, atoi(argv[i]));
            ++counter;
        }
    }

if (counter == 0)
{
  printf("Not found!\n");
}

return 0;
}