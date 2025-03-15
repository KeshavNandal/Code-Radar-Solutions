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
        if (arr[j] ==0)
        {
            int temp =arr[j];
            arr[j] =arr[end];
            arr[end] = temp;
            end--;
        }
    }
    for(int k=0;k<n;k++)
    {
        printf("%d ",arr[k]);
    }
    
}