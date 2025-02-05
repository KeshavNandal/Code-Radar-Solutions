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

      for(int z=x-2;z>=0;z--)
       {
          for(int j=1 ; j<=x-1-z ; j++)
          {
              printf(" ");
          }
          for(int j=0 ; j<2*z+1 ; j++)
          {
              pritnf("*");
          }
          printf("\n");
      }
}