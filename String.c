#include <stdio.h>
void printString(char arr[]);
int main() {
  char FirstName[] = {'Y', 'A', 'S', 'H', '\0'};
  char LastName[] = {"DUMASIA"};
  printString(FirstName);
  printString(LastName);
}
void printString(char arr[]) {
  for (int i = 0; arr[i] != '\0'; i++) {
    printf("%c", arr[i]);
  }
  printf("\n");
}