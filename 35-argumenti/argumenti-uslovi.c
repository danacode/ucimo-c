#include <stdio.h>

void main(int argc, char *argv[])
{

    if (argc == 2) {
        printf("You only have one argument.\n");
    }

    if (argc > 2 && argc < 5) {
        printf("Here's your arguments:\n");
        int i = 0;
        for(i = 1; i < argc; i++) {
            printf("%s ", argv[i]);
        }
        printf("\n");
    }

    if (argc >= 5 ) {
        printf("You have too many arguments.\n");
    }

}
