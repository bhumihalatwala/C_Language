#include<stdio.h>
#include<conio.h>

//find min of 3 num using nested if else
main()
{
  int a,b,c;
  clrscr();

  printf("Enter value of a: ");
  scanf("%d",&a);

  printf("Enter value of b: ");
  scanf("%d",&b);

  printf("Enter value of c: ");
  scanf("%d",&c);

  if(a == b || b == c)
  {
    printf("Values are similar");
  }
  else if(a<b)
  {
    if(a<c)
    {
      printf("The minimum value is: %d\n",a);
    }
    else
    {
      printf("The minimum value is: %d\n",c);
    }
  }
  else
  {
    if(b<c)
    {
      printf("The minimum value is: %d\n",b);
    }
    else
    {
      printf("The minimum value is: %d\n",c);
    }
  }

  getch();
}