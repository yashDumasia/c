#include <stdio.h>
#include <string.h>

struct student {
  int roll;
  char name[100];
  float cgpa;
};

int main() {
  struct student arr[100];
  arr[0].roll = 3;
  arr[0].cgpa = 9.5;
  strcpy(arr[0].name, "YASH");
  printf("student name = %s\n", arr[0].name);
  printf("student roll no. = %d\n", arr[0].roll);
  printf("student cgpa = %f\n", arr[0].cgpa);
  return 0;
}