#include<stdio.h>
#include<conio.h>

/*
A
B A
C B A
D C B A
E D C B A
*/
main()
{
  char i,j;
  clrscr();

  for(i='A';i<='E';i++)
  {
    for(j=i;j>='A';j--)
    {
       printf("%c ",j);
    }
    printf("\n");
  }
  getch();
}