#include <stdio.h>
int x,y,z;
scanf("%d%d%d",&x,&y,&z);
if(z>x&&z>y)
printf("%d",z);
else if(x>z&&x>y)
printf("%d",x);
else 
pritnf("%d",y);