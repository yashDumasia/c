#include <stdio.h>
void reverseArray(int arr[], int n);
void printarr(int arr[], int n);

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6};
  reverseArray(arr, 6);
  printarr(arr, 6);

  return 0;
}
void printarr(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d\t", arr[i]);
  }
  printf("\n");
}

void reverseArray(int arr[], int n) {
  for (int i = 0; i < n / 2; i++) {
    int firstvalue = arr[i];
    int secondvalue = arr[n - i - 1];
    arr[i] = secondvalue;
    arr[n - i - 1] = firstvalue;
  }
}
