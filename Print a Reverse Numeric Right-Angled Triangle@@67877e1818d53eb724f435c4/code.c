#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        for(j=x;j>0;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}