#include <stdio.h>
int main() {
  int age = 17;

  int age1 = 18;

  int *ptr = &age;

  int *ptr1 = &age1;

  printf("ptr = %u\n", ptr);

  printf("ptr1 = %u\n", ptr1);

  printf("differnce = %u\n", ptr - ptr1);

  ptr1 = &age;
  printf("comparition = %u\n", ptr == ptr1);
  return 0;
}