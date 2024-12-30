#include<stdio.h>
#include<conio.h>

main()
{
  float base,height,area;

  clrscr();

  printf("Enter value of base: ");
  scanf("%f",&base);

  printf("Enter value of height: ");
  scanf("%f",&height);

  area = 0.5 * base * height;

  printf("The area of the triangle is: %f",area);

  getch();
}