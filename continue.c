#include <stdio.h>
int main() {
  for (int i = 0; i <= 5; i = i + 1) {
    if (i == 3) {
      continue;
    }
    printf("%d\n", i);
  }
  return 0;
}