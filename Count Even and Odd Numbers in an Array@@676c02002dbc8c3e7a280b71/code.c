#include<stdio.h>
int main()
{
    int n;
    int arr[n],oddcount=0,evencount=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++)
    {
        if(arr[j]%2==0)
        {
            evencount++;
        }
        elseif(arr[j]%2!=0)
        {
            oddcount++;
        }
    }
    printf("%d %d",evencount,oddcount);
    
}