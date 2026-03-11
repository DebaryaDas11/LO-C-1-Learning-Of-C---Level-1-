#include <stdio.h>

int main() {
int a, b, choice;
float result;
printf("Enter two integers: ");
scanf("%d %d", &a, &b);
printf("\nMENU\n");
printf("1. Add\n");
printf("2. Subtract\n");
printf("3. Multiply\n");
printf("4. Divide\n");
printf("Enter your choice: ");
scanf("%d", &choice);
if (choice == 1) {
result = a + b;
printf("Result = %.2f", result);
}
else if (choice == 2) {
result = a - b;
printf("Result = %.2f", result);
}
else if (choice == 3) {
result = a * b;
printf("Result = %.2f", result);
}
else if (choice == 4) {
if (b != 0) {
result = (float)a / b;
printf("Result = %.2f", result);
} else {
printf("Division by zero is not allowed");
}
}
else {
printf("Invalid choice");
}
return 0;
}