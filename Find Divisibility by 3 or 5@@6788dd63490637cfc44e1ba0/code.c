#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x%3==0)
    printf("Divisible by 3");
    else if(x%5==0)
    printf("divisible by 5");
    else if(x%5==0&&x%3==0)
    printf("Divisible by both");
    else
    printf("Not Divisible");
}