#include <stdio.h>
int main() {
  int marks;

  printf("enter your marks : ");

  scanf("%d", &marks);

  if (marks > 90 && marks <= 100) {
    printf("A+ \n");
  }

  else if (90 >= marks && marks > 80) {
    printf("A \n");
  }

  else if (80 >= marks && marks > 70) {
    printf("B+ \n");
  }

  else if (70 >= marks && marks > 60) {
    printf("B \n");
  }

  else if (60 >= marks && marks > 50) {
    printf("C+ \n");
  }

  else if (50 >= marks && marks > 40) {
    printf("C \n");
  }

  else if (40 >= marks && marks > 33) {
    printf("D+ \n");
  }

  else if (33 >= marks) {
    printf("fail \n");
  }

  return 0;
}