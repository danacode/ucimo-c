#include <stdio.h>

int main() {

   char rec[100];
   int broj;

   printf("Unesi prvo rec pa broj: ");
   scanf("%s %d", rec, &broj);  // pamti samo do prvog razmaka

   printf("Uneo si: %s i %d \n", rec, broj);

   return 0;
}

