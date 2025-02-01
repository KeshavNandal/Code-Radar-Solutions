#include <stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch=='a'||ch=='i'||ch=='o'||ch=='e'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    printf("Vowel");
    else if(ch>='a'&&ch<='z'&&ch!='a'&&ch!='e'&&ch!='i'&&ch!='o'&&ch!='u')
    printf("Consonant");
    else if(isdigit(ch))
    printf("Digit");
    else
    printf("Special Character");
}