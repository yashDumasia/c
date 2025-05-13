#include <stdio.h>
int printcount(char arr[]);
int main() {
  char name[100];
  fgets(name, 100, stdin);

  printf("lenth is : %d\n", printcount(name));

  return 0;
}
int printcount(char arr[]) {
  int count = 0;
  for (int i = 0; arr[i] != '\0'; i++) {
    count++;
  }
  return (count - 1);
}