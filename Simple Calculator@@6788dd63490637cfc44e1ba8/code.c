#include <stdio.h>
int main()
{
    int x,y;
    char ch;
    scanf("%d",&x);
    scanf("%d", &y);
    scanf(" %c", &ch);
    switch(ch)
    {
        case '-' :
            printf("%d",x-y);
            break;
        case '+' :
            printf("%d",x+y);
            break;
        case '*' :
            printf("%d",x*y);
            break;
        case '/' :
            if(y != 0) printf("%d",x/y);
            else printf("error");
            break;
        default :
            printf("error");

    }

    return 0;
}