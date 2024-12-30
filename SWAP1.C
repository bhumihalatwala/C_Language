#include <stdio.h>
#include <conio.h>

//swap 2 var with 3rd var

main()
{
  int a,b,c;

  clrscr();

  printf("Enter value of a: ");
  scanf("%d",&a);

  printf("Enter value of b: ");
  scanf("%d",&b);

  c = a;
  a = b;
  b = c;

  printf("Value of a: %d\n",a);
  printf("Value of b: %d\n",b);

  getch();

}