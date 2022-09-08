#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c;
    printf("enter first number: "); scanf("%f", &a);
    printf("enter second number: "); scanf("%f", &b);
    printf("enter third number: "); scanf("%f", &c);


    printf("sum = %f \n", (a+b+c));
    printf("average = %f",(a+b+c)/3);


    return 0;
}
