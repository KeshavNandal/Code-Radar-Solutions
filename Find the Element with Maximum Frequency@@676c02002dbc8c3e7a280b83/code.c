#include<stdio.h>
int main()
{
    int n,prev=0,check=0;
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
                check=arr[j];
                if(i!=j){
                arr1[j]=-1;}
                count++;
             }
            }
           
        }
         if(count>prev)
            {prev=check;
             
            }
            
    }
    printf("%d",prev);
}