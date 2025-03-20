#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    int end=n-1;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   for(int j=0;j<n;j++)
    {
        for(int k=j+1;k<n;k++)
        {
            if(arr[j]>arr[k]&& arr[j]!=0&& arr[k] !=0)
            {
                int temp=arr[j];
                arr[j]=arr[k];
                arr[k]=temp;
            }
        }
    }

    for(int k=0;k<=end;k++)
    {
        if(arr[k]==0)
        {
            int temp=arr[k];
            arr[k]=arr[end];
            arr[end]=temp;
            end--;
            k--;
        }
    }
  
    
    for(int k=0;k<n;k++)
    {
        printf("%d ",arr[k]);
    }
    
}