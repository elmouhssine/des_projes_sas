#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int x , var2 , var3 , var4 ;
    printf("x =");
    scanf("%d",&x);
    printf("ver2 =");
    scanf("%d",&var2);
    printf("var3 =");
    scanf("%d",&var3);
    x=234/100;
    var2=(234%100)/10;
    var3=234%10;
    var4=(4*100)+(3*10)+2;
    printf("%d",var4);

    return 0;
}
