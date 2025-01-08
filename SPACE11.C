#include<stdio.h>
#include<conio.h>

/*
- - - - *
- - - * * *
- - * * * * *
- * * * * * * *
* * * * * * * * *
*/
main()
{
  int i,j,k,l;
  clrscr();

  for(i=1;i<=5;i++)
  {
    for(k=5;k>i;k--)
    {
      printf("  ");
    }
    for(j=1;j<=i;j++)
    {
      printf("* ");
    }

    if(i>1)
    {
      for(l=i-1;l>=1;l--)
      {
	printf("* ");
      }
    }
    printf("\n");
  }
  getch();
}