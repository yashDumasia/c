#include <stdio.h>
void reverse(int arr[], int n);
void print(int arr[], int n);
int main() {
  int arr[] = {1, 2, 3, 4, 5, 6};
  reverse(arr, 6);
  print(arr, 6);
  return 0;
}
void reverse(int arr[], int n) {
  for (int i = 0; i < n / 2; i++) {
    int first = arr[i];
    int last = arr[n - i - 1];
    arr[n - i - 1] = first;
    arr[i] = last;
  }
}
void print(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d \n", arr[i]);
  }
}
