#include<stdio.h>

int main(){
    int i, j;
    float f, g;
    scanf("%d %d", &i, &j);
    scanf("%f %f", &f, &g);
    printf("%d + %d = %d\n", i, j, i+j);
    printf("%.1f + %.1f = %.1f\n", f, g, f+g);

    return 0;
}