#include<stdio.h>
int main()
{
    int n ,count;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int k=0 ; k<n ; k++)
    {
        if(arr[k]<arr[k+1]&&arr[k+1]%2==0)
        {
            count=arr[k+1];
        }
    }
    printf("%d",count);
}
