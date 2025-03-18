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
         if((arr[j]==2)||(arr[j]==3))
                {
                  count++;
                
                }
        while(divi <= (arr[j]/2))
            {
               
                if(arr[j]%divi==0)
                {
                    break;
                }
                else
                {
                    divi++;

                }
                
            }
            if(divi>arr[j]/2)
            {count++;}
    }
    printf("%d",count);
}