#include <stdio.h>
int main() {
  FILE *fptr;
  fptr = fopen("test.txt", "w");
  fprintf(fptr, "%s", "DUMASIA");

  fclose(fptr);
  return 0;
}