#include <stdio.h>
#include <math.h>

int main(void)
{
  float change;
  int coins = 0;
  int amount;
  int quarters, nickles, dimes, pennys = 0;

  do {
    printf("Oi! How much change is owed? ");
    scanf("%f", &change);
  }
  while (change < 0);


  amount = round(change * 100);

  while (amount > 0) {

    if (amount >= 25) {
      amount -= 25;
      coins++;
      quarters++;
    }
    if (amount < 25 && amount >= 10) {
      amount -= 10;
      coins++;
      nickles++;
    }
    if (amount < 10 && amount >= 5) {
      amount -= 5;
      coins++;
      dimes++;
    }
    if (amount < 5 && amount >= 1) {
      amount -= 1;
      coins++;
      pennys++;
    }
  }


  printf("Total coins needed: %d\n", coins);
  printf("Quarters: %d\n", quarters);
  printf("Nickles: %d\n", nickles);
  printf("Dimes: %d\n", dimes);
  printf("Pennys: %d\n", pennys);

  return 0;
}
