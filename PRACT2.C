#include<stdio.h>
#include<conio.h>

main()
{
  int a = 5;
  int b = 5;
  int c = a*b;

  clrscr();

  printf(" ----------\n");
  printf("|\t   |\n");
  printf("|%d * %d = %d|\n",a,b,c);
  printf("|\t   |\n");
  printf(" ----------\n");

  getch();
}