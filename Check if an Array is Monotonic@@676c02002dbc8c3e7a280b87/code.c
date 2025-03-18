#include<stdio.h>
int main()
{
 int n,check1,check2;
 scanf("%d",&n);
 int arr[n];
 for(int i = 0; i < n; i++)
 {
    scanf("%d",&arr[i]);
 }
 for(int j =0; j<n ; j++)
 {
   if (arr[j]>=arr[j+1]&&j<n-1)
   {
    check1 = 1;
   }
   else if(arr[j]<=arr[j+1]&&j<n-1)
    {
        check1=0;
        break;
    }

 }
 for(int j =0; j<n ; j++)
 {
   if (arr[j]<=arr[j+1]&&j<n-1)
   {
    check2 = 1;
   }
   else if(arr[j]>=arr[j+1]&&j<n-1)
    {
        check2=0;
        break;
    }

 }
 if((check1==1)||(check2==1))
 {
    printf("YES");
 }
else
{
    printf("NO");
}
}
