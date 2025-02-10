#include <stdio.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    while(x>=1)
    {
        if (x%2==0)
        {   
            y=x/2;
            x=y;
            printf("0");

        }
        else if(x%2!=0)
        {
            y=x/2;
            x=y;
            printf("1");
        }
    }
    if(x==0)
    printf("0");
}