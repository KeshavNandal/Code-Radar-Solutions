#include<stdio.h>
int main()
{
    int n,count;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    if(n%2!=0)
    {
        n=n/2;
        printf("%d",arr[n]);
    }
    else if(n%2==0)
    {
        count=(arr[n/2]+arr[(n/2)+1])/2;
        printf("%d",count);
    }


}