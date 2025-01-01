#include <stdio.h>
#include <conio.h>

//tell positive, neutral or negative
main()
{
  int a;

  clrscr();

  printf("Enter any number: ");
  scanf("%d",&a);

  if(a<0)
  {
    printf("Your number is negative");
  }
  else if(a==0)
  {
    printf("Your number is neutral");
  }
  else
  {
    printf("Your number is positive");
  }

  getch();
}