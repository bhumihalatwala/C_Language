#include <stdio.h>
#include <conio.h>
#include <math.h>

main()
{
  int principal, frequency;
  float interest, amount, rate, year, power, divide, add;

  clrscr();

  printf("Enter principal amount: ");
  scanf("%d",&principal);

  printf("Enter compounding frequency : ");
  scanf("%d",&frequency);

  printf("Enter interest rate: ");
  scanf("%f",&rate);

  printf("Enter time(in years): ");
  scanf("%f",&year);

  power = frequency * year;
  divide = rate/(100 * frequency);
  add = 1 + divide;

  amount = principal * pow(add, power);
  interest = amount - principal;

  printf("\nThe total amount after compounding is: %f\n",amount);
  printf("The interest is: %f\n",interest);

  getch();
}