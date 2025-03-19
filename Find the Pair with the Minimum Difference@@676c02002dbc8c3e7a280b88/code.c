#include<stdio.h>
int main()
{
    int n,min=1000,count1=0,count2=0;
    scanf("%d",&n);
    if(n==1)
    {
        printf("-1");
        return 0;
    }
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++)
    {
        for(int k=0;k<n;k++)
        { if(arr[j]<arr[k+1])
           int temp =arr[j];
           arr[j]=arr[k+1];
           arr[k+1]=temp; 
            
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
    printf("%d %d",count2,count1);
}