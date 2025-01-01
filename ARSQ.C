#include<stdio.h>
#include<conio.h>

main()
{
  float side,area;

  clrscr();

  printf("Enter length of the side of the square: ");
  scanf("%f",&side);

  area = side * side;

  printf("The area of square is: %0.5f",area);

  getch();
}


