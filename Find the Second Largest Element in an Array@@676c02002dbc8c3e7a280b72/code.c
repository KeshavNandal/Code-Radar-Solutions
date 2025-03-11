#include<stdio.h>
int main()
{
    int x = 0;
    scanf("%d",&n);
    int arr[n],num=n-2;
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1 ;j<n;j++)
        {
            if(arr[i]>arr[j]&&j<n)
        {
            int temp =arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        }
    }
    for(int k=0;k<n;k++)
    {
        if(arr[num]<arr[num+1])
        {
            printf("%d",arr[num]);
            return 0;
        }
        else
        num--;
    }
    printf("-1");
   
}