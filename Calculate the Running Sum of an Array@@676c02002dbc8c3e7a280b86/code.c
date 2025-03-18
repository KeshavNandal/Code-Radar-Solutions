#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i =0; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=arr[0];
    for(int j =0;j<n-1;j++)
    {
        arr[j+1]=sum+arr[j+1];
        sum=arr[j+1];
    }
    for(int k=0;k<n;k++)
    {
        printf("%d "<&arr[k]);
    }
}