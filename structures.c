#include <stdio.h>
#include <string.h>
typedef struct ComputerEngineeringStudent {
  int roll;
  float cgpa;
  char name[100];
} ces;
int main() {
  ces y1 = {35, 9.8, "YASH DUMASIA"};
  printf("%s\n", y1.name);
  printf("%d\n", y1.roll);
  printf("%f\n", y1.cgpa);
  return 0;
}