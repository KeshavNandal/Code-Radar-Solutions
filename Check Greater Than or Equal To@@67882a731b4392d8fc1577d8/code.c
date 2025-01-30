#include <stdio.h>
#include<stdbool.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    bool z=x>=y;
    printf(z?"True":"False",z);
}