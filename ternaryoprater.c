#include <stdio.h>
int main() {
  int age;

  printf("enter your age : ");
  scanf("%d", &age);

  age >= 18 ? printf("adult \n") : printf("not adult \n");
}