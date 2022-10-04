#include <stdio.h>
#include <string.h>
 
void reverse(char *buf, int i, int j) {
    while (i < j) {
        char t = buf[i];
        buf[i] = buf[j];
        buf[j] = t;
        i ++;
        j --;
    }
}
 
int main(int argc, char* argv[]) {
    if (argc == 0) {
        return 0;
    }
    for (int i = 1; i < argc; ++ i) {
        int l = strlen(argv[i]);
        reverse(argv[i], 0, l - 1);
        printf("%s\n", argv[i]);
    }
    return 0;
}