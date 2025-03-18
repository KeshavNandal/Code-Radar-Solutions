#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n], count = 0;
    for(int i = 0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j = 0; j<n ;j++)
    {
        int divi =2;
        int origin_val=arr[j];
        while(divi < (arr[j]/2))
            {
                if(origin_val%divi==0)
                {
                    count++;
                    break;
                }
                else
                {
                    divi++;

                }
                
            }
    }
    printf("%d",count);
}