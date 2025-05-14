#include <stdio.h>
#include <string.h>
void salt(char password[]);

int main() {
  char password[100];
  scanf("%s", &password);  // password = "yash"
  salt(password);

  return 0;
}
void salt(char password[]) {
  char salt[] = "123";
  char newpassword[200];
  strcpy(newpassword, password);  // newpassword = "yash"(copy password)
  strcat(newpassword,
         salt);  // newpassword = "yash" + "123" (newpassword + salt)
  puts(newpassword);
}