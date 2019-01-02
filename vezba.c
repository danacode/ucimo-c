#include <stdio.h>

int main() {

  char ch;
  char s[20];
  char sen[100];

  // uzima karakter
  scanf("%c", &ch);
  // uzima rec
  scanf("%s", s);
  // uzima recenicu
  scanf("\n"); // hvata novi red iz prethodnog unosa
  scanf("%[^\n]%*c", sen);  // hvata sve do novog reda
  
  // stampa sve
  printf("%c\n", ch);
  printf("%s\n", s);
  printf("%s\n", sen);

  return 0;
}