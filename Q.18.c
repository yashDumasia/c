#include <stdio.h>
int main() {
  int n;
  // if you enter multiple of 7 the loop will be closed.

  do {
    printf("enter any even number : ", n);
    scanf("%d", &n);
    if (n % 7 == 0) {
      break;
    } else {
      printf("%d \n");
    }
  } while (1);

  printf("thanks \n");
  return 0;
}