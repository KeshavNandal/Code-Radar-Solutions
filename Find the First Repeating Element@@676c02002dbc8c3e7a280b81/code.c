#include<stdio.h>
int main
{
    int n,start =0,num,check=INT_MAX;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++;)
    {
        scanf("%d"&arr[i]);
    }
    for(int j = 0; j < n; j++)
    {
        int end = n-1;
        for(int k=0;k<n;k++)
        {
            if(arr[k]==arr[end])
            {
                num =end;
            }
            else end--;
        }
        if(num<check)
        {
            check =num;
        }
    }
    printf("%d",arr[check]);
}