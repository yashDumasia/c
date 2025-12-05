#include <stdio.h>
int main()
{
    int i, j, n, temp;
    printf("How many number you want to Enter : ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter number at position [%d]: ", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        printf("%d  ", a[i]);
    }
    printf("\n");
    return 0;
}