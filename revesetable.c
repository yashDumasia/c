#include <stdio.h>
int main() {
  int n;
  printf("enter value of n : ");
  scanf("%d", &n);
  for (int i = 10; i >= 1; i = i - 1) {
    printf("%d*%d=%d \n", n, i, i * n);
  }
  return 0;
}