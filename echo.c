#include <stdio.h>
#include <string.h>
int main() {
  char echo[100];
  while (1) {
    printf(">  ");
    scanf("%s", echo);
    printf("%s\n", echo);
    if (strcmp(echo, "q") == 0 || strcmp(echo, "Q") == 0) {
      break;
    }
  }
  return 0;
}