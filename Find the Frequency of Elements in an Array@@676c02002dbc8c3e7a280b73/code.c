#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int printed[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        printed[i]=0;
    }
    for(int j=0;j<n;j++)
    {
        if(printed [j]==1)
        {continue;}
        int count=0;
        for(int f=0;f<n;f++)
        {
            if(arr[j]==arr[f])
            {
             count++;
             printed[f]=1;
            }
        }
        printf("%d %d\n",arr[j],count);
    }


}