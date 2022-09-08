#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r, circumference;
    printf("entrer le rayon du cercle: "); scanf("%f", &r);
    circumference = 2*3.14*r;
    printf("de circumference du cercle: %f", circumference);
    return 0;
}
