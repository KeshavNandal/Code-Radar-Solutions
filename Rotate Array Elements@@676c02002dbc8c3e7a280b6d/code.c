#include<stdio.h>
int rotatearr(int n,int arr[],int k,int start,int end)
{
     while(start<=end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
int main()
{
    int n,k,start=0,end=n-1;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d", &k);

    rotatearr(n, arr, k, start, end);
    rotatearr(n, arr, k, start, k - 1);
    rotatearr(n, arr, k, k, end);
   
    for(int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }

}