#include<stdio.h>
#include<conio.h>

main()
{
  int amount,rate,time;
  float interest;

  clrscr();

  printf("Enter amount: ");
  scanf("%d",&amount);

  printf("Enter interest rate: ");
  scanf("%d",&rate);

  printf("Enter time(in months): ");
  scanf("%d",&time);

  interest = amount * rate * time * 0.01;

  printf("The interest is: %f",interest);

  getch();
}