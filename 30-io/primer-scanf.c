#include <stdio.h>

int main( ) {

   char str[100];
   int i;

   printf("Unesi prvo tekst pa broj: ");
   scanf("%s %d", str, &i);

   printf("Uneo si: %s i %d \n", str, i);

   return 0;
}

