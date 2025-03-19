#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++)
    {
        int count =0;
        for(int k=j+1;k<n;k++)
        {
            if(arr[j]>=arr[k])
            {count=arr[j];}
            else
            {count=0;
             break;
            }
        }
        if(count!=0)
        {
            printf("%d ",count);
        }
    }
    printf("%d",arr[n-1]);
}