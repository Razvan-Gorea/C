#include <stdio.h>
int main()
{
   char str[20];
   scanf("%[^\n]%*c", str);
   printf("Hello\n%s\n", str);
 
   return 0;
}