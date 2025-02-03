#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    for(int i =1;i<=x+(x-1);i++)
    {
        for (int y =1;y<=i;y++)
        {
        if(i<=x)
        {
            for(int j=1;j<=x-i-1;j++)
            printf(" ");
        }
        else if(i>x)
        {
            for(int j=1;j<=x-1;j++)
            printf(" ");
        }
        }
        for( int y=1;y<=i;y++)
        {
            printf("*");
        }
        printf("\n");



    }
}