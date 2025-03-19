#include<stdio.h>
int main()
{
    int n,min=1000,count1=0,count2=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++)
    {
        int end=n-1;
        for(int k=j+1;k<n;k++)
        {
            if(arr[j]-arr[end]<min)
            {
                if(arr[j]>arr[end])
                {
                min=arr[j]-arr[end];
                }
                if(arr[j]<arr[end])
                {
                min=arr[end]-arr[j];
                }

                count1=arr[j];
                count2=arr[end];
            }
        }
    }
    printf("%d %d",count1,count2);
}