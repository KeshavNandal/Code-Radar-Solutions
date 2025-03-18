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
    for(int j = 0; j<n ; j++)
    {
        if(arr[j]<check && arr[j]%2==0)
        {
            check=j;
        }           

    }
    printf("%d",check);
}