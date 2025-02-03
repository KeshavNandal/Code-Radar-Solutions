#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    for(int i =x; i>0 ; i--)
    {   
        char ch='A';
        for(int j = i; j>0 ;j--)
        {
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
}