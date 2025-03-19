#include<stdio.h>
void rotatearr(int arr[],int start,int end)
{
     while(start < end)
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
    int n,k, end=n-1;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d", &k);
    k = k %n;
    rotatearr(arr, 0, end);
    rotatearr(arr, 0, k - 1);
    rotatearr(arr, k, end);
   
    for(int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }

}