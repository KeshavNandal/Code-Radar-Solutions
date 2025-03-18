#include<stdio.h>
int main()
{
    int n,check=0,hi;
    scanf("%d",&n);
    int arr[n];
    for (int i=0 ;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int j=0;j<n;j++)
    {
        if (arr[j]<arr[j+1]&&j<n-1)
        {
            max=arr[j+1];
            check=j+1;
            hi=1;

        }
    }
    arr[check]=0;
    for(int j=0;j<n;j++)
    {
        if (arr[j]<arr[j+1]&&j<n-1)
        {
            max=arr[j+1];
            check=j+1;


        }
    }
    if(hi=1)
    {
        pritnf("%d",arr[check])
    }
    else 
    {
        pritnf("-1");
    }
    



}