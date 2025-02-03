#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
     for(int i=1 ; i<=x ; i++)
     {
        for(int j=x-1;j>0;j--)
        {
            printf(" ");
        }
        for(int j =1; j<=x;j++)
        {
            for(int y=j; y>0;y--)
            {
                for(int y=j;y>0;y--)
                {
                    printf("*");
                }
                
            }

        }
        printf("\n");
     }
}