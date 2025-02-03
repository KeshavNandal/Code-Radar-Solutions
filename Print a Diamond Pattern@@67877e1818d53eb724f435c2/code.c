#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    for(int i=0;i<x;i++)
    {
        for(int j=1;j<=x-i-1;j++)
        {
            printf(" ");
        }
        for(int j=i;j>0;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}