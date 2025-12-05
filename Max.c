#include <stdio.h>
int main()
{
  int n, i;
  printf("How many number you want to enter : ");
  scanf("%d", &n);
  int a[n];
  for (i = 0; i < n; i++)
  {
    printf("Enter a Number[%d] : ", i + 1);
    scanf("%d", &a[i]);
  }
  int max = a[0];
  for (i = 0; i < n; i++)
  {
    if (max <= a[i])
    {
      max = a[i];
    }
  }
  printf("A Maximum Number is : %d\n", max);
}