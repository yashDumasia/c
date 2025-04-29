#include <stdio.h>
float max(float *a, float *b);
int main() {
  float a, b;
  printf("enter first number  : ");
  scanf("%f", &a);

  printf("enter second number  : ");
  scanf("%f", &b);

  printf("Maximum number is : %f\n", max(&a, &b));

  return 0;
}
float max(float *a, float *b) {
  if (*a > *b) {
    return *a;
  } else {
    return *b;
  }
}