#include<stdio.h>
int main()
{
    int n ;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int check=arr[0];
    for(int j = 0; j<n-1 ; j++)
    {
        if(arr[j]>arr[j+1] && arr[j]%2==0)
        {
            check=j;
        }           

    }
    printf("%d",arr[check]);
}