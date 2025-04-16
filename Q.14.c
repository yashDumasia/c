#include <stdio.h>
int main() {
  int n;
  printf("enter value of n : ");
  scanf("%d", &n);

  //   for (int i = 0; i <= n; i = i + 1) {
  //     printf("%d \n", i);
  //   }

  int i = 0;
  while (i <= n) {
    printf("%d \n", i);
    i++;
  }

  return 0;
}