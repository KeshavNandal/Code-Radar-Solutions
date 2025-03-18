#include<stdio.h>
int main()
{
    int n ;
    scanf("%d",&n);
    int arr[n],value=-1,num=0;
    for(int i=0 ; i<n ;i++)
    {
      scanf("%d",&arr[i]);
    }
    for(int j=0;j<n ;j++)
    {
        
        for(int k=j+1; k < n ;k++)
        {
            if(arr[j]==arr[k])
            {
                value=arr[j];
                bool check=true;
            }
        }
        if(check==true)
        {
            break;
        }
    }
    printf("%d",value);


}