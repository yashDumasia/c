#include <stdio.h>
int calculatePr(int science, int maths, int sanskrit);
int main() {
  int sci = 98, math = 99, san = 89;

  printf("Percentage is %d. \n", calculatePr(sci, math, san));
  return 0;
}
int calculatePr(int science, int maths, int sanskrit) {
  return ((science + maths + sanskrit) / 3);
}
