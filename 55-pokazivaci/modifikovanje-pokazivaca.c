#include <stdio.h>
// https://www.hackerrank.com/challenges/pointer-in-c/

void modifikuj(int *x)
{ 
  *x = *x + 1;  // ili (*x)++
}

int main()
{
  int broj;
  scanf("%d", &broj);
  modifikuj(&broj);
  printf("%d", broj);
  return 0;
}