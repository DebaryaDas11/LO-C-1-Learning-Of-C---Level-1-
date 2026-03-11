#include<stdio.h>
int main() {
float radius;
printf("Enter Radius");
scanf("%f", &radius);
float area = 3.14 * radius * radius;
printf("Area OF Circle is %f", area);
return 0;
}