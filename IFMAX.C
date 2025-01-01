#include<stdio.h>
#include<conio.h>

//find max num from 4 num using nested if else
main()
{
  int a,b,c,d;
  clrscr();

  printf("Enter first number: ");
  scanf("%d",&a);
  printf("Enter second number: ");
  scanf("%d",&b);
  printf("Enter third number: ");
  scanf("%d",&c);
  printf("Enter fourth number: ");
  scanf("%d",&d);

  if(a==b || b==c || c==d)
  {
    printf("Values are similar");
  }
  else if(a>=b)
  {
    if(a>=c)
    {
      if(a>=d)
      printf("The maximum number is: %d",a);
      else
      printf("The maximum number is: %d",d);
    }
    else
    {
      if(c>=d)
      printf("The maximum number is: %d",c);
      else
      printf("The maximum number is: %d",d);
    }
  }
  else
  {
    if(b>=c)
    {
      if(b>=d)
      printf("The maximum number is: %d",b);
      else
      printf("The maximum number is: %d",d);
    }
    else
    {
      if(c>=d)
      printf("The maximum number is: %d",c);
      else
      printf("The maximum number is: %d",d);
    }
  }

  getch();
}