#include <stdio.h>
#include<stdlib.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x==2)
    {
        printf("Prime");
    }
    for(int i=2;i<=x/2;i++)
    {
        if(x%i==0)
        {
            printf("Not Prime");
            exit()
            
        }
    
      
    }
    printf("Prime");
     
}