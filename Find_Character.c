#include <stdio.h>
int main()
{
    char str[100], ch;
    int i;
    printf("Enter any String : ");
    fgets(str, 100, stdin);
    printf("Enter a character which you whant to find in String : ");
    scanf("%c", &ch);
    for (i = 0; str[i] != '\n'; i++)
    {
        if (str[i] == ch)
        {
            printf("%c ", str[i]);
        }
        else
        {
            printf("_ ");
        }
    }
    printf("\n");
}