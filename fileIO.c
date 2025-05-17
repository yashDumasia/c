#include <stdio.h>
int main() {
  FILE *fptr;
  fptr = fopen("test.txt", "a");
  fprintf(fptr, "%s", "DUMASIA");

  fclose(fptr);
  return 0;
}