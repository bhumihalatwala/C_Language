#include<stdio.h>
#include<conio.h>
#define PI 3.14

main()
{
  float radius,area;

  clrscr();

  printf("Enter radius of the circle: ");
  scanf("%f",&radius);

  area = PI * radius * radius;

  printf("Area of the circle is: %0.3f",area);

  getch();

}