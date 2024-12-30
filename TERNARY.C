#include<stdio.h>
#include<conio.h>

//find min of 3 num using ternary operator
main()
{
  int a, b, c;
  clrscr();

  printf("Enter value of a: ");
  scanf("%d",&a);

  printf("Enter value of b: ");
  scanf("%d",&b);

  printf("Enter value of c: ");
  scanf("%d",&c);

  (a<b)
    ? (a<c)
      ? printf("The minimum value is: %d",a)
      : printf("The minimum value is: %d",c)
    : (b<c)
      ? printf("The minimum value is: %d",b)
      : printf("The minimum value is: %d",c);

  getch();
}