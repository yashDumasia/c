#include <stdio.h>
#include <string.h>

struct student {
  int roll;
  char name[100];
  float cgpa;
};

int main() {
  struct student y;
  y.roll = 3;
  y.cgpa = 9.5;
  strcpy(y.name, "Yash");
  printf("student name = %s\n", y.name);
  printf("student roll no. = %d\n", y.roll);
  printf("student cgpa = %f\n", y.cgpa);
  return 0;
}