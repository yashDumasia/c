#include <stdio.h>
int main() {
  int n;
  printf("enter value of n : ");
  scanf("%d", &n);

  printf("table of %d is given bellow. \n", n);

  //   for (int i = n; i <= 10 * n; i = i + n) {
  //     printf("%d \n", i);
  //   }

  for (int i = 1; i <= 10; i++) {
    printf("%d*%d=%d\n", n, i, i * n);
  }
  return 0;
}