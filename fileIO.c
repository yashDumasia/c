#include <stdio.h>
int main() {
  FILE *fptr;
  fptr = fopen("test.txt", "w");
  fputc('D', fptr);
  fputc('U', fptr);
  fputc('M', fptr);
  fputc('A', fptr);
  fputc('S', fptr);
  fputc('I', fptr);
  fputc('A', fptr);

  fclose(fptr);
  return 0;
}