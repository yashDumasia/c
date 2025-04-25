#include <stdio.h>
int celsius(float c);
int main() {
  float c;
  printf("enter temperature in celsius : ");
  scanf("%f", &c);
  celsius(c);
  return 0;
}
int celsius(float c) {
  float f = 9 * c / 5 + 32;
  printf("temperature in celsius is a : %f \n", f);
}