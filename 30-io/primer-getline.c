#include <stdio.h>

int input(char *s,int length);

int main()
{
    char buffer[32];
    char *b = buffer;
    size_t bufsize = 32;

    printf("Unesi nesto: ");
    getline(&b, &bufsize, stdin);
    printf("Uneo si: %s", buffer);

    return(0);
}

