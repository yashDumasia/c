#include <stdio.h>

int main() {
  int n;

  printf("enter value of n : ");
  scanf("%d", &n);

  int sum = 0;
  for (int i = 1; i <= n; i++) {
    sum = sum + i;
  }

  printf("%d \n", sum);

  return 0;
}