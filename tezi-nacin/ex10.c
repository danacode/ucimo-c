#include <stdio.h>

// pokrenuti sa argumentima iz komandne linije, npr ./ex10 zdravo svete predivni
int main(int argc, char *argv[])
{
  char *states[] = {
    "California", "Oregon",
    "Washington", "Texas"
  };
  int num_states = 4;
  int i = 0;

  for (i = 1; i < argc; i++) {
    printf("arg %d: %s\n", i, argv[i]);
  }

  for (i = 0; i < num_states; i++) {
    printf("state %d: %s\n", i, states[i]);
  }

  return 0;
}
