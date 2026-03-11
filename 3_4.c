#include<stdio.h>
int main() {
float base , height;
printf("Enter base");
scanf("%f", &base);
printf("Enter height");
scanf("%f", &height);
float area = 1/2.0 * base * height;
printf("area of the tringle is %f", area);
return 0;
}