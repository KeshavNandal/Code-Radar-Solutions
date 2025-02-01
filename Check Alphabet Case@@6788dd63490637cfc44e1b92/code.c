#include <stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z')
    printf("Lowercase");
    else if(ch>="A"&&ch<='z')
    printf("Uppercase");
    else
    printf("Not an alphabet");
}