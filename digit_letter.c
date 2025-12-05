#include <stdio.h>
int main()
{
    char i;
    printf("Enter any Character : ");
    scanf("%c", &i);
    if ('A' <= i && i <= 'Z')
    {
        printf("Enter Letter is Capital.\n");
    }
    else if ('a' <= i && i <= 'z')
    {
        printf("Enter Letter is Small.\n");
    }
    else if ('0' <= i && i <= '9')
    {
        printf("You Enter a Digit.\n");
    }
    else
    {
        printf("You Enter a Special Character.\n");
    }
}