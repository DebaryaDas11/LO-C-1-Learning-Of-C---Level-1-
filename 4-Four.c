#include<stdio.h>
int main() {
int number,first,middle,last;
printf("Enter The Number:");
scanf("%d", &number);
first = number/100;
middle = (number%100)/10;
last = number%10;
int sum = first + middle + last;
printf("The Total is %d", sum);
return 0;
}