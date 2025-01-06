#include<stdio.h>
#include<conio.h>
/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
main()
{
  int i,j,num=1;
  clrscr();

  for(i=1;i<=5;i++)
  {
    for(j=1;j<=i;j++)
    {
       printf("%d ",num);
       num++;
    }
    printf("\n");
  }
  getch();
}