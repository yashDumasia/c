#include <stdio.h>
int main()
{
    char str[100];
    int i;
    printf("Enter a String : ");
    fgets(str, 100, stdin);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
    printf("Final String : %s", str);
    printf("\n");
}