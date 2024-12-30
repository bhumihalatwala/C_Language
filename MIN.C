#include <stdio.h>
#include <conio.h>

//find minimum of 2 numbers
main()
{
  int a,b;

  clrscr();

  printf("Enter number 1: ");
  scanf("%d",&a);

  printf("Enter number 2: ");
  scanf("%d",&b);

  if(a>b)
  {
    printf("Number 2 is minimum");
  }
  else if(a<b)
  {
    printf("Number 1 is minimum");
  }
  else
  {
    printf("Both are equal");
  }

  getch();
}