#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++)
    {
        int count=0,rem=0;
        if(arr[j]<0)
        {
            arr[j]=arr[j]*-1;
        }
        while(arr[j]!=0)
        {
            rem=arr[j]%10;
            count =count+rem;
            arr[j]=arr[j]/10;

        }
        printf("%d ",count);
    }
}