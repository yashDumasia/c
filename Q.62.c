#include <stdio.h>
int main() {
  FILE *fptr;
  fptr = fopen("student.txt", "a");
  char name[100];
  char surname[100];
  int roll;
  float cgpa;
  printf("name : ");
  scanf("%s", name);
  printf("surname : ");
  scanf("%s", surname);
  printf("roll : ");
  scanf("%d", &roll);
  printf("cgpa : ");
  scanf("%f", &cgpa);

  fprintf(fptr, "Name: %s\n", name);
  fprintf(fptr, "Surname: %s\n", surname);
  fprintf(fptr, "Roll: %d\n", roll);
  fprintf(fptr, "CGPA: %.2f\n", cgpa);

  fprintf(fptr, "\n");

  fclose(fptr);

  return 0;
}