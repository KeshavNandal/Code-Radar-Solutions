#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int a=0;
    for(int i=0;i<x;i++)
    {
        for(int j=1;j<x-i-1;j++)
        {
            printf(" ");
        }
        for(int j=x-a;j<x;j++)
        {
            printf("*");
        }
        a--;
        printf("\n");
    }
}