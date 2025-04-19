#include <stdio.h>
void namaste();
void bonjor();
void hello();
int main() {
  char contry;
  printf("enter your contry(enter i for india and f for french) : %c", contry);
  scanf("%c", &contry);

  if (contry == 'i') {
    namaste();
  } else if (contry == 'f') {
    bonjor();
  } else {
    hello();
  }
  return 0;
}
void namaste() { printf("Namaste\n"); }
void bonjor() { printf("Bonjor\n"); }
void hello() { printf("Hello\n"); }