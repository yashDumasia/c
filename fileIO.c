#include <stdio.h>
int main() {
  FILE *fptr;
  fptr = fopen("test.txt", "r");
  printf("%c", fgetc(fptr));
  printf("%c", fgetc(fptr));
  printf("%c", fgetc(fptr));
  printf("%c", fgetc(fptr));
  printf("%c", fgetc(fptr));
  printf("%c", fgetc(fptr));
  printf("%c", fgetc(fptr));
  printf("%c", fgetc(fptr));
  printf("%c", fgetc(fptr));
  printf("%c", fgetc(fptr));
  printf("%c\n", fgetc(fptr));

  fclose(fptr);
  return 0;
}