#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int a=0;
    for(int i=0;i<x;i++)
    {
        for(int j=1;j<=x-i-1;j++)
        {
            printf(" ");
        }
        for(int j=i+a;j>=0;j--)
        {
            printf("*");
        }
        a++;
        printf("\n");
    }

     for(int i=x-2;i>=0;i--)
     {
         for(int j=1 ; j<=x-i-1 ; j++)
         {
             printf(" ");
         }
         for(int j=0 ; j<2*i+1 ; j++)
         {
             pritnf("*");
         }
         printf("\n");
     }
}