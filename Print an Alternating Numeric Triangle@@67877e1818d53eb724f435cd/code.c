#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int a=1;
    for(int i = 1 ; i<=x ; i++)
    {
        for(int j =1; j<=i ; j++)
        {
            if(a%2==0)
            {printf("0 ");}
            else
           {printf("1 ");}
           a++;
        }
        printf("\n");
    }



}