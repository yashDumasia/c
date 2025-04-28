#include <stdio.h>
void _swap(int a, int b);
void swap(int* a, int* b);

int main() {
  int x = 3, y = 5;
  _swap(x, y);
  printf("_x = %d , _y = %d \n", x, y);

  swap(&x, &y);
  printf("x = %d , y = %d \n", x, y);

  return 0;
}
// call by value
void _swap(int a, int b) {
  int t;
  t = a;
  a = b;
  b = t;

  printf("_a = %d , _b = %d\n", a, b);
}

// call by reference
void swap(int* a, int* b) {
  int t;
  t = *a;
  *a = *b;
  *b = t;

  printf("a = %d , b = %d\n", *a, *b);
}
