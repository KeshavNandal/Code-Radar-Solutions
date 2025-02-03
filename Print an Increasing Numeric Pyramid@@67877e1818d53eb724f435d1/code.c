#include <stdio.h>
int main()
{
 int x;
 scanf("%d",&x);
 for (int i =0 ;i<x;i++)
 {
    for(int j=1; j<=x-i-1;j++)
    {
        printf(" ");
    }
    for (int j =1;j<i+1;j++)
    {
        printf("%d ",j);
    }
    printf("\n");
 }
}