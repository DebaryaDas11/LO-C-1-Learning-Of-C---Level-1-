#include<stdio.h>
int main() {
float c;
printf("Enter value of Centigrade");
scanf("%f", &c);
float fahrenheit = (c * 1.8) + 32;
printf("The required fahrenheit is %f", fahrenheit);
return 0;
}
