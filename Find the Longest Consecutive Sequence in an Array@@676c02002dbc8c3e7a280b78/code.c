#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],count=1,total=0,check=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++)
    {
        for(int k=j+1;k<n;k++)
        if(arr[j]>arr[k])
        {
            int temp =arr[j];
            arr[j]=arr[k];
            arr[k]=temp;
            
        }
    }
    for(int l=0;l<n;l++)
    {
        printf("%d ",arr[l]);
    }
    
}