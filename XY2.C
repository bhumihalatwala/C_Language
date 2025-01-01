#include<stdio.h>
#include<conio.h>

// solve (x + y)^2

main()
{
  int x,y,ans;

  clrscr();

  printf("Enter Value of x: ");
  scanf("%d",&x);

  printf("Enter Value of y: ");
  scanf("%d",&y);

  ans = x*x + 2*x*y + y*y;

  printf("Value of (%d+%d)^2 is: %d",x,y,ans);

  getch();

}
