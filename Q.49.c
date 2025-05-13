#include <stdio.h>
#include <string.h>
int printcount(char arr[]);
int main() {
  char name[100];
  fgets(name, 100, stdin);
  int lenth = strlen(name) - 1;

  printf("lenth is : %d\n", printcount(name));
  printf("lenth is : %d\n", lenth);
  return 0;
}
int printcount(char arr[]) {
  int count = 0;
  for (int i = 0; arr[i] != '\0'; i++) {
    count++;
  }
  return (count - 1);
}