#include <stdio.h>
int main() {
int bprice, mprice, disc;
float sp, profit;
printf("Enter buying price\n");
scanf("%d", &bprice);
printf("Enter marker price\n");
scanf("%d", &mprice);
printf("Enter discount %%\n");
scanf("%d", &disc);
sp = mprice - (mprice * disc / 100.0);
profit = sp - bprice;
(profit > 0) ?
printf("Seller made a profit of %.2f", profit) :
(profit < 0) ?
printf("Seller made a loss of %.2f", -profit) :
printf("No profit no loss");
 return 0;
}