#include<stdio.h>
int main() {
int a, b;
printf("Enter Two Number:");
scanf("%d %d", &a, &b);
if (a > b) {
printf("The Largest Number Is %d", a);
}
else if (b > a) {
printf("The largest number id %d", b);
}
else {
printf("Equal Numbers");
}
return 0;
}