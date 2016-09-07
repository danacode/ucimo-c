#include <stdio.h>
int main(int argc, char *argv[])
{
  // pravi niz godina i niz imena
  int ages[] = {23, 43, 12, 89, 2};
  char *names[] = {
    "Alan", "Frank", "Mary", "John", "Lisa"
  };

  // racuna duzinu niza, podelom velicine niza sa velicinom clana
  int count = sizeof(ages) / sizeof(int);
  int i = 0;

  // prvi način: štampa vrednosti nizova koristeći index
  for(i = 0; i < count; i++) {
    printf("%s has %d years alive.\n", names[i], ages[i]);
  }

  printf("---\n");

  // postavlja pokazivače na početak nizova
  int *cur_age = ages;
  char **cur_name = names;

  // štampa lokaciju i vrednost pokazivača (tj. lokaciju pokazanog)
  printf("%p\n", cur_age);
  printf("%p\n", &cur_age);
  printf("%d\n", *cur_age); // štampa vrednost pokazanog
  printf("%d\n", *(cur_age + 1)); // štampa vrednost nakon pokazanog
  printf("---\n");

  // drugi način: štampa vrednosti nizova koristeći pokazivače
  for(i = 0; i < count; i++) {
    printf("%s is %d years old.\n", *(cur_name+i), *(cur_age+i));
  }

  printf("---\n");

  // treći način: pokazivači su samo nizovi
  for (i = 0; i < count; i++) {
    printf("%s is %d years old again.\n", cur_name[i], cur_age[i]);
  }

  printf("---\n");

  // fourth way with pointers in a stupid complex way
  for(cur_name = names, cur_age = ages; (cur_age - ages) < count; cur_name++, cur_age++) {
      printf("%s lived %d years so far.\n", *cur_name, *cur_age);
    }

  return 0;
}
