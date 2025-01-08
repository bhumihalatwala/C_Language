#include<stdio.h>
#include<conio.h>

/*
1 2 3 4 5 5 4 3 2 1
1 2 3 4 - - 4 3 2 1
1 2 3 - - - - 3 2 1
1 2 - - - - - - 2 1
1 - - - - - - - - 1
*/
main()
{
  int i,j,k,m;
  clrscr();

  for(i=5;i>=1;i--)
  {
    for(j=1;j<=i;j++)
    {
      printf("%d ",j);
    }
    for(k=5;k>i;k--)
    {
      printf("    ");
    }
    for(m=i;m>=1;m--)
    {
      printf("%d ",m);
    }
    printf("\n");
  }
  getch();
}