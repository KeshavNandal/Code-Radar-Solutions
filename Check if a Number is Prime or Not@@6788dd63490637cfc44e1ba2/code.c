#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    for(int i=2;i<=x/2;i++)
    if(x==2)
    {
        printf("Prime");
        break;
    }
        else if(x%i==0)
        {
            printf("Prime");
            break;
        }
        
    
     
}