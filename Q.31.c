#include <stdio.h>
int fact(int n);
int main() {
  printf("factrial is a : %d \n", fact(6));

  return 0;
}
int fact(int n) {
  if (n == 1) {
    return 1;
  }
  int factnm1 = fact(n - 1);
  int factn = factnm1 * n;
  return factn;
}