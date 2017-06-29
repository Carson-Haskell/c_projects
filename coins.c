#include <stdio.h>
#include <math.h>

int main(void)
{
  float change;

  // tracks coins needed
  int coins = 0;
  int amount;
  // tracks specific coins needed
  int quarter, nickel, dime, penny;

  do {
    printf("How much change is owed? ");
    scanf("%f", &change);
  } while (amount < 0);

  // converts float --> int and rounds
  amount = round(change * 100);

  while (amount > 0) {
    if (amount >= 25) {
      amount -= 25;
      coins++;
      quarter++;
    }
    if (amount < 25 && amount >= 10) {
      amount -= 10;
      coins++;
      nickel++;
    }
    if (amount < 10 && amount >= 5) {
      amount -= 5;
      coins++;
      dime++;
    }
    if (amount < 5 && amount >= 1) {
      amount -= 1;
      coins++;
      dime++;
    }
  }

  printf("Total coins needed: %d\n", coins);
  printf("Quarters needed: %d\n", quarter);
  printf("Nickels needed: %d\n", nickel);
  printf("Dimes needed: %d\n", dime);
  printf("Pennys needed: %d\n", penny);

  return 0;
}
