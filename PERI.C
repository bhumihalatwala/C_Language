#include<stdio.h>
#include<conio.h>
#define PI 3.14

main()
{
  int radius;
  float perimeter;

  clrscr();

  printf("Enter radius: ");
  scanf("%d",&radius);

  perimeter = 2 * PI * radius;

  printf("The perimeter is: %f",perimeter);

  getch();
}
