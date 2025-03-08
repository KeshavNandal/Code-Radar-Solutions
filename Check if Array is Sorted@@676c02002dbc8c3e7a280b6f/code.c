#include<stdio.h>
int main()
{
    int n,x=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n,i++)
    {
        scanf("%d",&arr[i]);
    }
    x=arr[0];
    for(int j=1;j<n;j++)
    {
        if(x<arr[j])
        {
            continue;
        }
        else 
        {
            printf("Not Sorted");
            return 0;
        }
    }
    printf("Sorted");
}