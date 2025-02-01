#include <stdio.h>
int main()
{
int x,y,z;
scanf("%d%d%d",&x,&y,&z);
if(z>x&&z>y)
printf("%d",z);
else if(x>z&&x>y)
printf("%d",x);
else 
printf("%d",y);
}