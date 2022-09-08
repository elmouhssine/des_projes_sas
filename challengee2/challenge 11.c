#include <stdio.h>
#include <stdlib.h>

int main()
{
    float length, width, circumference;
    printf("entrer la longueur du rectangle: ");
    scanf("%f", &length);
    printf("entrer la largeur du rectangle: ");
    scanf("%f", &width);
    circumference =  2*(length + width);
    printf("la circonférence d'un rectangle : %f", circumference);
    return 0;
}
