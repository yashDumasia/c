#include <stdio.h>
int main() {
  char fullName[100];
  //   scanf("%s", firstName);
  //   printf("Your Name is %s\n", firstName);

  fgets(fullName, 100, stdin);
  puts(fullName);
  return 0;
}