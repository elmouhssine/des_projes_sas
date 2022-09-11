#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char x[5];
    printf("taper un nombre\n");
    scanf("%s",&x);
    printf(" voila %s", strrev(x));
    return 0;
}
