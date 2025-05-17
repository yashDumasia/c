#include <stdio.h>
int main() {
  FILE *fptr;
  fptr = fopen("test.txt", "r");
  char ch[100];
  fscanf(fptr, "%s", &ch);
  printf("%s\n", ch);

  fclose(fptr);
  return 0;
}