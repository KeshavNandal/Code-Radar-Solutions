#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],count=1;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0;k<n;k++)
    {
        for(int k=i+1;i<n-1;k++)
        if(arr[j]>arr[k])
        {
            int temp =arr[j];
            arr[j]=arr[k];
            arr[k]=temp;
            
        }
    }
    for(int l=0;l<n;l++)
    {
        if(arr[l+1]==arr[l]+1)
        {
            count++;
        }
        else{count=1;}
    }
    printf("%d",count);
}