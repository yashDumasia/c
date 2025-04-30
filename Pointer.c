#include <stdio.h>
int main() {
  int age = 17;
  int *ptr = &age;

  printf("ptr value = %u\n", ptr);

  ptr++;

  printf("ptr value = %u\n", ptr);

  ptr--;

  printf("ptr value = %u\n", ptr);

  return 0;
}