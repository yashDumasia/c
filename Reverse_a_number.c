#include <stdio.h>

int main()
{
    int num, rev = 0, rem;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse logic
    while (num != 0)
    {
        rem = num % 10;       // Get last digit
        rev = rev * 10 + rem; // Add digit to reverse
        num = num / 10;       // Remove last digit
    }

    // Output
    printf("Reversed Number = %d\n", rev);

    return 0;
}
