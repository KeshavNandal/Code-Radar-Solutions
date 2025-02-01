#include <stdio.h>
int main()
{
    int x,y;
    char ch;
    scanf("%d%d %c",&x,&y,&ch);
    switch(ch)
    {
        case '-' : printf("%d",x-y);
        break;
        case '+' : printf("%d",x+y);
        break;
        case '*' : printf("%d",x*y);
        break;
        case '/' : printf("%d",x/y);
        break;
        default : printf("error");

    }
}