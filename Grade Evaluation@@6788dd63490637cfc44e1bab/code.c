#include <stdio.h>
int main()
{
    char ch;
    scanf( "%ch", &ch);
    switch(ch)
    {
        case 'A':
            printf("Excellent");
            break;
        case 'B':
            printf("Good");
            break;
        case 'C':
            printf("Average");
            break;
        case 'D':
            printf("Below Average");
            break;
        case 'F':
            printf("Fail");
            break;                    
    }
}