#include<stdio.h>
int main()
{
    int n,m,count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    for(int j=0;j<n;j++)
    {
        if(arr[j]==m)
        {
            printf("%d",j);
            return 0;
        }
        
    }
    printf("-1");
  
}