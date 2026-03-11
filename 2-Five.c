#include <stdio.h>
int main() {
char ch;
printf("Enter an alphabet: ");
scanf("%c", &ch);
if (ch >= 'a' && ch <= 'z') {
ch = ch - 32;
printf("Uppercase letter: %c", ch);
} else {
printf("Entered alphabet is not lowercase");
}
return 0;
}