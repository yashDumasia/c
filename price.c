#include <stdio.h>
void calculatePrice(int i);
int main() {
  float i;

  printf("enter price of product : Rs.");
  scanf("%f", &i);

  calculatePrice(i);

  return 0;
}
void calculatePrice(int i) {
  printf("Final Price(with gst) = Rs.%f \n", (i * 0.18) + i);
}