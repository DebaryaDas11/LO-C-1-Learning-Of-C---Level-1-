#include<stdio.h>
int main() {
int given_meter,km,meter;
printf("Enter given_meter:");
scanf("%d", &given_meter);
km = (given_meter/1000);
meter = (given_meter%1000);
printf("= %d km, %d meter ",km,meter);
return 0;
}