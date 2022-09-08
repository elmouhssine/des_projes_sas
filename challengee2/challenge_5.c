
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double F, C;
    printf("f : ");
    scanf("%lf", &F);
    C=(F-32)/1.8;
    printf("c : %f \n", C);
    if (C<0)
    {
        printf("très froid");
    }
    else if (0<C && C<20)
    {
        printf("froide");
    }
    else if (20<C && C<40)
    {
        printf("chaud");
    }
    else
    {
        printf("très chaud");
    }


    return 0;
}

