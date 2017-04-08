#include <stdio.h>

// pokrenuti sa argumentima iz komandne linije
void main(int argc, char *argv[])
{
  int i = 0;
  for (i = 1; i < argc; i++) {
    printf("argument %d: %s\n", i, argv[i]);
  }
}
