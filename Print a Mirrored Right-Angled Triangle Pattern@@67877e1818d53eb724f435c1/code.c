#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
     for(int i=0 ; i<x ; i++)
     {
         for(int j=1; j<=x-1;j++)
         {
            printf(" ");
         }
         for (j=1;j<=x;j++)
         {
            printf("*");
         }
         printf("\n");
     }
}