#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d",&n);
    int arr[n],arr1[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    for(int j=0;j<n;j++)
    {
        if((j+m)<n)
        {
            arr1[j+m]=arr[j];
        }
        else if((j+m)>n)
        {
            arr1[j+m-n]=arr[j];
        }
    }
    for(int k=0;k<n;k++)
    {
        printf("%d ",arr1[k]);
    }
}