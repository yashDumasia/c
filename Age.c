#include <stdio.h>

int main() {
  int age;
  printf("Enter age : ");

  scanf("%d", &age);

  if (age >= 18) {
    printf("adult \n");
  }

  else if (age < 18 && age > 12) {
    printf("teenager \n");
  }

  else {
    printf("child \n");
  }

  printf("thank you \n");

  return 0;
}