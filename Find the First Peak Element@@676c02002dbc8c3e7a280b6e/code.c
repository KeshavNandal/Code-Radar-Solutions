#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++)
    {
        if((arr[j]>arr[j-1])&&(arr[j]>arr[j+1]))
        {
            printf("%d",arr[j]);
            return 0;
        }
        else
        {
            continue;
        }
    }
    if(arr[0]>arr[1])
    {
        printf("%d",arr[0]);
        return 0;
    }
    else if(arr[n-1]>arr[n-2])
    {
        printf("%d",arr[n-1]);
        return 0;
    }
    printf("-1");
}