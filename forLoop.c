#include <stdio.h>
int main() {
  for (int i = 0; i <= 100; i = i + 1) {
    if (i == 51) {
      break;
    }
    printf("%d \n", i);
  }

  printf("end\n");

  return 0;
}