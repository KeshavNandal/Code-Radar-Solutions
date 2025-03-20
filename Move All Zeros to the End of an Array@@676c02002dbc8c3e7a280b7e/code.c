#include<stdio.h>
int main()
{
    int n,count=0,end=n-1;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   for(int j=0;j<n;j++)
    {
        for(int k=j+1;k<n;k++)
        {
            if(arr[j]>arr[k])
            {
                int temp=arr[j];
                arr[j]=arr[k];
                arr[k]=temp;
            }
        }
    }
    for(int k=0;k<n;k++)
    {
        printf("%d ",arr[k]);
    }
    
}