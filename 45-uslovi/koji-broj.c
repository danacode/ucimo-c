#include <stdio.h>

const char *brojevi[] = {"jedan", "dva", "tri", "cetiri", "pet", "sest", "sedam", "osam", "devet"};

int main()
{
  int n;
  scanf("%d", &n);

  if (n >= 1 && n <= 9)
    printf("Uneli ste broj %s.\n", brojevi[n - 1]);
  else
    printf("Uneli ste broj veci od 9.\n");

  return 0;
}