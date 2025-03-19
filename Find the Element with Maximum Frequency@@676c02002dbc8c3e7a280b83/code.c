#include<stdio.h>
int main()
{
    int n,count =0,prev=0;
    scanf("%d",&n);
    int arr[n],arr1[n];
    for(int i =0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < n; i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr1[j]==-1)
            {
             if(arr[i]==arr[j])
             {
                arr1[i]=-1;
                count++;
             }
            }
            if(count>prev)
            {prev=arr[i];
             count=0;
            }
            else 
            {count=0;}
        }
    }
    printf("%d",prev);
}