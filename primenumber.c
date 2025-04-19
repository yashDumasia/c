#include <stdio.h>
int main() {
  int n;
  printf("Enter any number : ", n);
  scanf("%d", &n);

  int count = 0;
  for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
      count = count + 1;
    }
  }

  if (count == 2) {
    printf("It is a prime number.\n");
  } else {
    printf("It is not a prime number.\n");
  }

  return 0;
}