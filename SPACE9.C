#include<stdio.h>
#include<conio.h>

/*
1 2 3 4 5
1 2 3 4 -
1 2 3 - -
1 2 - - -
1 - - - -
1 2 - - -
1 2 3 - -
1 2 3 4 -
1 2 3 4 5
*/
main()
{
  int i,j,k,m,l;
  clrscr();

  for(i=5;i>=1;i--)
  {
    for(j=1;j<=i;j++)
    {
      printf("%d ",j);
    }
    printf("\n");
  }
  for(l=2;l<=5;l++)
  {
    for(m=1;m<=l;m++)
    {
      printf("%d ",m);
    }
    printf("\n");
  }
  getch();
}