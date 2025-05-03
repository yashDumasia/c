#include <stdio.h>
int main() {
  int marks[2][3];
  marks[0][0] = 90;
  marks[0][1] = 40;
  marks[0][2] = 50;

  marks[1][0] = 80;
  marks[1][1] = 70;
  marks[1][2] = 60;

  printf("%d\n", marks[0][0]);

  printf("%d\n", marks[1][0]);

  printf("%d\n", marks[0][2]);
  return 0;
}