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
    for(int m=0;m<n;m++)
    {
        if(arr[m]==1)
        {
            check =1;
        }
    }
    if(check!=1)
    {
     printf("1");
     return 0;
    }
    for(int l=0;l<n;l++)
    {
        if(arr[l+1]==arr[l]+1&&arr[l]+1!=0)
        {
            continue;
        }
        else 
        {
           
            if(arr[l]+1==0)
            {
                continue;
            }
             else if(arr[l+1]>0)
             {
                printf("%d",arr[l]+1);
                return 0;
             }
        }
    }
    if(arr[n-1]>0)
    {
        printf("%d",arr[n-1]+1);
    }
    else
    {
        printf("1");
    }
}       