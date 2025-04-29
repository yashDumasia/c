#include <stdio.h>
void sap(int a, int b, int *sum, int *average, int *product);
int main() {
  int a = 3, b = 5;

  int sum, average, product;

  sap(a, b, &sum, &average, &product);

  printf("sum = %d , average = %d , product = %d \n", sum, average, product);

  return 0;
}
void sap(int a, int b, int *sum, int *average, int *product) {
  *sum = a + b;
  *average = *sum / 2;
  *product = a * b;
}