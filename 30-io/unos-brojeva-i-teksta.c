#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int broj;
    double decimala;
    char tekst[100];

    printf("Unesite broj, decimalni broj i tekst\n");

    scanf("%d", &broj);
    scanf("%lf", &decimala);
    scanf("%*[\n] %[^\n]", tekst);

    printf("Uneli ste %d, %.01lf i %s\n", broj, decimala, tekst);

    return 0;
}
