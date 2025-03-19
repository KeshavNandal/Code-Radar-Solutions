#include<stdio.h>
int main()
{
    int n,prev=0,check=0;
    int max_count = 0;
    scanf("%d",&n);
    int arr[n],arr1[n];
    for(int i =0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < n; i++)
    {int count =0;
        for(int j=0;j<n;j++)
        {
            if(arr1[j]!=-1)
            {
             if(arr[i]==arr[j])
             {

                count++;
             }
            }
           
        }
         if(count>max_count)
            {
                max_count=count;
                prev=arr[i];
             
            }
            
    }
    printf("%d",prev);
}