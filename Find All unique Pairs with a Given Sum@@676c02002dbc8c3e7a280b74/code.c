#include<stdio.h>
int main()
{
    int n,k,count;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(int j=0;j<n;j++)
    {   int end=n-1;
        for(int k=j+1 ;k<n;k++)
        {  
            if(arr[j]+arr[end]==k)
            {
                printf("%d %d",arr[j],arr[end]);
            }
            end--;

        }
    }

}