#include<stdio.h>
int main()
{
    int n,max=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j =0;j<n;j++)
    {
        for (int k=j+1;k<n;k++)
        {
            if(arr[j]>arr[k])
            {
                max=arr[k];
            }
        }
        arr[j]=max;
    }
     arr[n-1]=-1;
    for(int k=0;k<n;k++)
    {
        printf("%d ",arr[k]);
    }
}