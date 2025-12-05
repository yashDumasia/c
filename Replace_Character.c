#include <stdio.h>
int main()
{
    char str[100], ch, re;
    int i;
    printf("Enter any String : ");
    fgets(str, 100, stdin);
    printf("Enter a character which you whant to replace in String : ");
    scanf(" %c", &ch);
    printf("Enter a character by which you whant to replace in String : ");
    scanf(" %c", &re);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            str[i] = re;
        }
    }
    printf("Final String : %s", str);
}