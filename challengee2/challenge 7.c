#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("enter first number: ");
    scanf("%d", &a);
    printf("enter second number: ");
    scanf("%d", &b);

    printf("\n");
    printf("a+b= %d \n", (a+b));
    printf("a-b= %d \n", (a-b));
    printf("a\*b= %d \n", (a*b));
    printf("a/b= %.2f \n", (float) a / (float) b);
    printf("a%b= %d", (a%b));
    return 0;
}
