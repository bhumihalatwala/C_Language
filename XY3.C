#include<stdio.h>
#include<conio.h>

// solve (x + y)^3

main()
{
  int x,y,ans;

  clrscr();

  printf("Enter Value of x: ");
  scanf("%d",&x);

  printf("Enter Value of y: ");
  scanf("%d",&y);

  ans = x*x*x + y*y*y + 3*x*x*y + 3*x*y*y;

  printf("Value of (%d+%d)^3 is: %d",x,y,ans);

  getch();

}