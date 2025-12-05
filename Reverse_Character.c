#include <stdio.h>
int main()
{
    int i, j, lenth = 0;
    char ch, str[100], rev[100];
    printf("Enter String : ");
    fgets(str, 100, stdin);
    for (i = 0; str[i] != '\n'; i++)
    {
        lenth++; // Find lenth of String
    }
    for (j = lenth, i = 0; j >= 0; j--, i++)
    {
        rev[i] = str[j];
    }
    printf("Final String : %s", rev);
    printf("\n");
}