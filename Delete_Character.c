#include <stdio.h>
int main()
{
    char str[100], ch;
    int i, j;
    printf("Enter any String : ");
    fgets(str, 100, stdin);
    printf("Enter a character which you whant to delete in String : ");
    scanf(" %c", &ch);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            for (j = i; str[j] != '\0'; j++)
            {
                str[j] = str[j + 1];
            }
            i--;
        }
    }
    printf("Final String : %s", str);
    printf("\n");
}