#include <stdio.h>
void areaS(float side);
void areaR(float lenth, float breath);
void areaC(float redius);
int main() {
  float side;
  printf("enter side of square: ");
  scanf("%f", &side);
  areaS(side);

  float lenth, breath;
  printf("enter lenth of rectangle : ");
  scanf("%f", &lenth);
  printf("enter breath of rectangle : ");
  scanf("%f", &breath);
  areaR(lenth, breath);

  float radius;
  printf("enter value of radius : ");
  scanf("%f", &radius);
  areaC(radius);

  return 0;
}
void areaS(float side) { printf("Area of square is = %f \n", side * side); }
void areaR(float lenth, float breath) {
  printf("Area of rectangle is = %f \n", lenth * breath);
}
void areaC(float radius) {
  printf("Area of circle is = %f \n", 3.14 * radius * radius);
}