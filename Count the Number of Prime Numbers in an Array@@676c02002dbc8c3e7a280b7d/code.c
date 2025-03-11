#include<stdio.h>
int main()
{
    int n,count=0,divi=2;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int j=0;j<n;j++)
    {
        while(divi<arr[j]/2)
        {
            if(divi%arr[j]==0)
            {
                count++;
            }
        }
    }
    return count;
}