#include <stdio.h>
#include <string.h>

struct student {
  int roll;
  char name[100];
  float cgpa;
};

int main() {
  struct student y = {3, "YASH", 9.5};
  struct student *ptr = &y;
  printf("%d\n", (*ptr).roll);
  return 0;
}