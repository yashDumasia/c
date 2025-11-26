#include <stdio.h>

int main()
{
    int a, b, r;

    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }

    printf("GCD = %d\n", a);

    return 0;
}
