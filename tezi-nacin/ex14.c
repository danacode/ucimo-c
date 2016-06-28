#include <stdio.h>
#include <ctype.h>
#include <string.h>

// program stampa argumente koje mu prosledimo

// proglasava funkcije unapred
void print_letters(char arg[]);

void print_arguments(int argc, char *argv[]) {
  int duzina_reci = 0;
  int i = 0;
  for(i = 1; i < argc; i++) {
    duzina_reci = strlen(argv[i]);
    printf("%d\n", duzina_reci);
    print_letters(argv[i]);
  }
}

void print_letters(char arg[]) {
  int i = 0;
  for(i = 0; arg[i] != '\0'; i++) {
    char ch = arg[i];
    if(isalpha(ch) || isblank(ch)) {
      printf("'%c' == %d ", ch, ch);
    }
  }
  printf("\n");
}

int main(int argc, char *argv[]) {
  print_arguments(argc, argv);
  return 0;
}
