#include <stdio.h>
int main() {
  int n;

  do {
    printf("enter any even number : ", n);
    scanf("%d", &n);

    if (n % 2 == 0) {
      printf("%d \n", n);
    } else {
      printf("it is not even number. \n");
      break;
    }
  } while (1);

  printf("thanks \n");
  return 0;
}