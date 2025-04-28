#include <stdio.h>
void square(int n);
void square1(int* n);
int main() {
  // pointer in function call

  int number = 4;
  square(number);
  printf("number = %d\n", number);

  square1(&number);
  printf("number1 = %d\n", number);

  return 0;
}
// call by value
void square(int n) {
  n = n * n;
  printf("square = %d\n", n);
}
// call by reference
void square1(int* n) {
  *n = (*n) * (*n);
  printf("square1 = %d\n", *n);
}