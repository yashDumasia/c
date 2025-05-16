#include <stdio.h>
#include <string.h>

struct student {
  int roll;
  char name[100];
  float cgpa;
};

void printInfo(struct student y);

int main() {
  struct student y = {3, "YASH DUMASIA", 9.7};
  printInfo(y);

  return 0;
}
void printInfo(struct student y) {
  printf("NAME IS : %s\n", y.name);
  printf("ROLL NO. IS : %d\n", y.roll);
  printf("CGPA IS : %f\n", y.cgpa);
}