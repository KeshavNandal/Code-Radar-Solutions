#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++)
    {
        int orgin_value =arr[j];
        int reman=0,divi=0;
        for(int k=0;k<n;k++)
        {
            divi=orgin_value%10;
            reman=reman*10+divi;
            orgin_value=orgin_value/10;
        }
        if(reman==arr[j])
        {count++;}
    }
    printf("%d",count);
}