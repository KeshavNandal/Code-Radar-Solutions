#include<stdio.h>
int main()
{
    int n,product=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++)
    {
        for(int k=0;k<n;k++)
        {
            if((arr[j] * arr[k])>product &&j!=k)
            {
                product= arr[j]*arr[k];
            }
        }
    }
    printf("%d",product);
}