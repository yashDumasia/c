#include <stdio.h>
int main() {
  int marks[3];

  printf("enter marks of phy. = ");
  scanf("%d", &marks[0]);

  printf("enter marks of chem. = ");
  scanf("%d", &marks[1]);

  printf("enter marks of maths = ");
  scanf("%d", &marks[2]);

  printf("phy. = %d , chem. = %d , maths = %d\n", marks[0], marks[1], marks[2]);

  return 0;
}