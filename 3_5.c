#include<stdio.h>
int main() {
int a,b,c;
printf("Enter Value of a");
scanf("%d", &a);
printf("Enter Value of b");
scanf("%d", &b);
c = a;
a = b;
b = c;
printf("After Swapping :\n");
printf("Value of a is %d\n", a);
printf("Value of b is %d\n", b);
return 0;
}