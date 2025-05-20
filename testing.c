#include <stdio.h>
#include <stdlib.h>

int main() {
  int *ptr;
  ptr = (int *)calloc(5, sizeof(int));
  ptr[0] = 1;
  ptr[1] = 5;
  ptr[2] = 10;
  ptr[3] = 15;
  ptr[4] = 20;

  for (int i = 0; i <= 4; i++) {
    printf("%d\n", ptr[i]);
  }
  return 0;
}
