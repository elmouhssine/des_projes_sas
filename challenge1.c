#include <stdio.h>
#include <stdlib.h>

int main()
{
   char prenom [50];
   char nom [33];
   char sexe [33] ;
   int age ;
   int  tele ;


   printf("entre  de prenom");
   scanf("%s",&prenom);

    printf("entre de nom");
    scanf("%s",&nom);

     printf("entre de sexe");
     scanf("%s",&sexe);

      printf("entre de age");
      scanf("%d",&age);

       printf("entre de tele");
       scanf("%d",&tele);

    printf("prenom: %s \n", prenom);
    printf("nom: %s \n",nom);
    printf("sexe: %s \n",sexe);
    printf("age :%d \n",age);
    printf("tele : %d\n",tele);


    return 0;
}
