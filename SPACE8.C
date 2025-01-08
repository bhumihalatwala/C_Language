#include<stdio.h>
#include<conio.h>

/*
1 2 3 4 5 5 4 3 2 1
1 2 3 4 - - 4 3 2 1
1 2 3 - - - - 3 2 1
1 2 - - - - - - 2 1
1 - - - - - - - - 1
1 - - - - - - - - 1
1 2 - - - - - - 2 1
1 2 3 - - - - 3 2 1
1 2 3 4 - - 4 3 2 1
1 2 3 4 5 5 4 3 2 1
*/
main()
{
  int i,j,k,m,l,n,o,p;
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
  for(l=1;l<=5;l++)
  {
    for(n=1;n<=l;n++)
    {
      printf("%d ",n);
    }
    for(o=5;o>l;o--)
    {
      printf("    ");
    }
    for(p=l;p>=1;p--)
    {
      printf("%d ",p);
    }
    printf("\n");
  }
  getch();
}