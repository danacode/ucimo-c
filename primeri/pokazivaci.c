#include <stdio.h>

int main() {

  int bus = 47;
  printf("Varijabla ima vrednost %d i nalazi se na memorijskoj lokaciji %p\n", bus, &bus);

  // skladisti lokaciju varijable tipa int
  int * pBus = &bus;
  printf("Varijabla ima vrednost %d i nalazi se na memorijskoj lokaciji %p\n", bus, pBus);

  printf("Pokazivac ima vrednost %p i nalazi se na memorijskoj lokaciji %p\n", pBus, &pBus);

  return 0;
}
