#include <stdio.h>

int main() {

  int bus = 47;
  printf("Varijabla ima vrednost %d i nalazi se na memorijskoj lokaciji %p\n", bus, &bus);

  // skladisti lokaciju varijable tipa int u pokazivac
  int * pBus = &bus;
  printf("Pokazivac ima vrednost %p i nalazi se na memorijskoj lokaciji %p\n", pBus, &pBus);
  printf("Pokazivac pokazuje na varijablu koja ima vrednost %d\n", *pBus);

  return 0;
}
