#include<stdio.h>
int main()
{
    int n,count =0,prev=0;
    scanf("%d",&n);
    int arr[n];
    for(int i =0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < n; i++)
    {
        for(int k=0;k<n;k++)
        {
            if(arr[i]==arr[k])
            {
                count++;
            }
        }
        if(count>prev)
        {
            prev =count;
        }
        else 
        {count =0;}
    }
    printf("%d",count);
}