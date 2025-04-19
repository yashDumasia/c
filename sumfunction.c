#include <stdio.h>
int sum(int a, int b);
int main() {
  int a, b;
  printf("enter first value : ");
  scanf("%d", &a);
  printf("enter second value : ");
  scanf("%d", &b);

  int s = sum(a, b);
  printf("sum = %d\n", s);
  return 0;
}
int sum(int a, int b) { return a + b; }