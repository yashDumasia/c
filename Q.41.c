#include <stdio.h>
int countOdd(int arr[], int n);
int main() {
  int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  printf("%d\n", countOdd(array, 9));

  return 0;
}
int countOdd(int arr[], int n) {
  int count = 0;
  for (int i = 0; i <= n; i++) {
    if (arr[i] % 2 != 0) {
      count++;
    }
  }
  return count;
}