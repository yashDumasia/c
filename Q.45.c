#include <stdio.h>
int main() {
  int n;
  printf("enter n : ");
  scanf("%d", &n);

  int fib[n];
  fib[0] = 0;
  fib[1] = 1;
  printf("fibonacii serise up to %dth term : \n0\n1\n", n);
  for (int i = 2; i <= n; i++) {
    fib[i] = fib[i - 1] + fib[i - 2];

    printf("%d\n", fib[i]);
  }

  //   printf("%d\n", fib[n]);
  return 0;
}