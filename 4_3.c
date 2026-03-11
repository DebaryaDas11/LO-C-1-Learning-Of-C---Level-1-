#include<stdio.h>
int main() {
int number , first , last;
printf("Enter Number");
scanf("%d", &number);
first = number/100000;
last = number%10;
int sum = first + last;
printf("The sum is %d", sum);
return 0;
}