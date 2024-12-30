#include<stdio.h>
#include<conio.h>

//print 1 to 10 using while loop
main()
{
  int i;
  clrscr();

  i=1;
  while (i<=10)
  {
    printf("%d\t",i);
    i++;
  }
  getch();
}