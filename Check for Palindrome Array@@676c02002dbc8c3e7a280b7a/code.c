#include<stdio.h>
int main()
{
    int n;
    int start=0,last=n-1;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++)
    {
        if(arr[start]==arr[last])
        {
            start++;
            end--;
            continue;
        }
        else
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
}