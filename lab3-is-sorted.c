#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int *convert(int *arr, int argc, char *argv[]);

int
main(int argc, char *argv[])
{
    int arr[argc - 1];
    convert(arr, argc, argv);
}

int *
convert(int *arr, int argc, char *argv[])
{
    for (int i = 1; i < argc; ++i){
        arr[i] = atoi(argv[i]);
    }
return arr;
}


