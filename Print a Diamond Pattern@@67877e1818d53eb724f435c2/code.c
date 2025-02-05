#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    a=0;
    for(int i=0;i<x;i++)
    {
        for(int j=1;j<x-i-1;j++)
        {
            printf(" ");
        }
        for(int j=i-a;j<x;j++)
        {
            printf("*")
        }
        a--;
        printf("\n");
    }
}