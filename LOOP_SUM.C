#include<stdio.h>
#include<conio.h>

//print sum of 1 to n
main()
{
  int i,n,sum = 0;
  clrscr();

  printf("Enter any number: ");
  scanf("%d",&n);

  if(n<1)
  {
    printf("Invalid...");
  }
  else
  {
    for(i=1;i<=n;i++)
    {
      sum += i;
    }
    printf("The sum of all numbers: %d",sum);
  }
  getch();
}