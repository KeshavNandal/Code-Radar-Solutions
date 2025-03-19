#include<stdio.h>
int main()
{
    int n,min=1000,count1=0,count2=0;
    scanf("%d",&n);
    if(n==1)
    {
        printf("-1");
        return 0;
    }
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++)
    {
        int end=j+1;
        for(int k=j+1;k<n;k++)
        {
            if(arr[j]-arr[k]<min)
            {
                // if(arr[j]>arr[k])
                // {
                min=arr[j]-arr[k];
                // }
                // if(arr[j]<arr[k])
                // {
                // min=arr[k]-arr[j];
                // }

                count1=arr[j];
                count2=arr[k];
                end++;
            }
        }
    }
    printf("%d %d",count2,count1);
}