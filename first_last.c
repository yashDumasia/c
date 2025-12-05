#include <stdio.h>
int main()
{
    int no, first, last, sum;
    printf("Enter andy number : ");
    scanf("%d", &no);
    if (no < 0)
    {
        printf("It doesn't work on negative number..!!\n");
    }
    else
    {
        last = no % 10;
        while (no >= 10)
        {
            no = no / 10;
        }
        first = no;
        sum = first + last;
        printf("First = %d,Last = %d\n", first, last);
        printf("Sum of First and Last Digit of your Entered Numer is : %d \n", sum);
    }
}