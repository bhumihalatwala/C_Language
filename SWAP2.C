#include <stdio.h>
#include <conio.h>

//swap 2 var without 3rd var

main()
{
  int x,y;

  clrscr();

  printf("Enter value of x: ");
  scanf("%d",&x);

  printf("Enter value of y: ");
  scanf("%d",&y);

  x = x + y;
  y = x - y;
  x = x - y;


  printf("Value of x: %d\n",x);
  printf("Value of y: %d\n",y);

  getch();

}