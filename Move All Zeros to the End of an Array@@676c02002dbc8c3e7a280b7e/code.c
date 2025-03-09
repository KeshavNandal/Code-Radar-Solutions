#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    int end=n-1;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++)
    {
        if(arr[j]==0)
        {
            swap(arr[j],arr[end]);
            end--;
        }
    }
    for(int k =0; k<n; k++)
    {
        printf("%d",arr[k]);
    }
}