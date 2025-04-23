#include <stdio.h>
void hello(int count);
int main() {
  hello(10);

  return 0;
}
void hello(int count) {
  if (count == 0) {
    return;
  }
  printf("Hello, Yash !\n");
  hello(count - 1);
}