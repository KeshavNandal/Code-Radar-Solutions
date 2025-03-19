#include<stdio.h>
int main()
{
    int n,min=1000,count1,count2;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++)
    {
        for(int k=j+1;k<n;k++)
        { if(arr[j]<arr[k])
        {
           int temp =arr[j];
           arr[j]=arr[k];
           arr[k]=temp; 
        }
            
        }
    }
    int end=n-1;
   for(int k =0;k<n;k++)
   {
    if(arr[k]-arr[end]<min)
    min=arr[k]-arr[end];
    count1=arr[k];
    count2=arr[end];
   }
    
}