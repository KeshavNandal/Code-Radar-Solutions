#include<stdio.h>
int main()
{
    int x = 0, n,y;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    x = arr[0];
    y = arr[0];
    for(int j = 1; j < n; j++)
    {
        if(x<arr[j])
        {
            x=arr[j];
        }
    }
    for(int k=0;k<n;k++)
    {
        if(y<arr[k]&&x<y)
        {
            y=arr[k];
        }
    }
    printf("%d",y);
}