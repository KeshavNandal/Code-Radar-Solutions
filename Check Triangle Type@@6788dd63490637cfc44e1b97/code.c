#include <stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(x==y&&y==z)
    printf("Equilateral");
    else if((x==y&&x!=z)||(x==z&&x!=y)||(z==y&&z!=x))
    printf("Isosceles");
    else
    printf("Scalene");

}