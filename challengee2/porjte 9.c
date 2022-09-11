#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float x1 , x2 , y1 , y2 ,var1 , var2 , var3 ;

    printf("x1 un cordoni");
    scanf("%f",&x1);
    printf("y1 un cordoni");
    scanf("%f",&y1);
    printf("x2 un cordoni");
    scanf("%f",&x2);
    printf("y2 un cordoni");
    scanf("%f",&y2);

    var1=pow((x2-x1),2);
    var2=pow((y2-y1),2);
    var3=sqrt(var1+var2);

    printf("%f",var3);




    return 0;
}
