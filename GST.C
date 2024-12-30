#include<stdio.h>
#include<conio.h>

main()
{
  int amount, rate;
  float tax, totalPayable;

  clrscr();

  printf("Enter amount: ");
  scanf("%d",&amount);

  printf("Enter GST Rate (5%, 12%, 18%, 28%): ");
  scanf("%d",&rate);

  tax = amount * rate * 0.01;
  totalPayable = amount + tax;

  printf("\nThe tax to be paid is: %0.2f\n",tax);
  printf("The total payable amount is: %0.2f",totalPayable);

  getch();

}