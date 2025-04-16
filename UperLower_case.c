#include <stdio.h>
int main() {
  char ch;

  printf("enter any character : ");

  scanf("%c", &ch);

  if (ch >= 'A' && ch <= 'Z') {
    printf("it is in upercase. \n");
  }

  else if (ch >= 'a' && ch <= 'z') {
    printf("it is in lowercase. \n");
  }
  return 0;
}