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
        int count=0;
        for(int f=0;f<n;f++)
        {
            if(arr[j]==arr[f])
            {
             count++;
            }
        }
        printf("%d %d\n",arr[j],count);
    }


}