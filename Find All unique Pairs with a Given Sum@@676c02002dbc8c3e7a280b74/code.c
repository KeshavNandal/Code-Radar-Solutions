#include<stdio.h>
int main()
{
    int n,k,count;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(int l=0;l<n-1;l++)
    {
        if(arr[l]==arr[l+1])
        {count=1;}
        else{
        count=0;
        break;}
    }
    if(count==0){
    for(int j=0;j<n;j++)
    {   int end=n-1;
        for(int m=j+1 ;m<n;m++)
        {  
            if((arr[j]+arr[end])==k)
            {
                printf("%d %d\n",arr[j],arr[end]);
            }
            end--;

        }
    }
    }
    else
    {printf("%d %d",arr[0],arr[1]);}

}