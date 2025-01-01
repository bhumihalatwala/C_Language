#include<stdio.h>
#include<conio.h>

//print 1 to 10 using do while loop
main()
{
  int i;
  clrscr();

  i=1;
  do
  {
    printf("%d ",i);
    i++;
  } while (i<=10);

  getch();
}