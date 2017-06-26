#include <stdio.h>
#include <math.h>

int main(void)
{
  float change;
  int coins = 0;
  int amount;
  int quarter, nickle, dime, penny = 0;

   //prompts user for ammount owed and validates
  do {
    printf("How much change is owed? ");
    scanf("%f", &change);
  }
  while (change < 0);

  // Round and convert to cents (float --> int)
  amount = round(change * 100);

  // calculates and returns minimum amount of coins needed
  while (amount > 0) {

    if (amount >= 25) {
      amount -= 25;
      coins++;
      quarter++;
    }
    if (amount < 25 && amount >= 10) {
      amount -= 10;
      coins++;
      nickle++;
    }
    if (amount < 10 && amount >= 5) {
      amount -= 5;
      coins++;
      dime++;
    }
    if (amount < 5 && amount >= 1) {
      amount -= 1;
      coins++;
      penny++;
    }
  }
  printf("Total coins needed: %d\n", coins);
  printf("Quarters: %d\n", quarter);
  printf("Nickels: %d\n", nickle);
  printf("Dimes: %d\n", dime);
  printf("Pennys: %d\n", penny);
  return 0;
}
