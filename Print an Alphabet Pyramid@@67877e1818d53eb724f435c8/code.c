#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    for(int i =1;i<=x ;i++)
    {
        char ch='A';
        for(int j =1 ;j<=i ;j++)
        {
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
}