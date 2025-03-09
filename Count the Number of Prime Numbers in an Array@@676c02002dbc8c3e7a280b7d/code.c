#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++)
    {
        if(arr[j]==2)
        {
            count++;
        }
        for(int k=2;k<(arr[j])/2;k++)
        {
            if (arr[j]%k==0)
            {
                count++;
                break;
            }
        }
    }
    printf("%d",count);
}