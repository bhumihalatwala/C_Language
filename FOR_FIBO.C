#include<stdio.h>
#include<conio.h>

//print fibonacci series using for loop
main()
{
  int i,n,x=0,y=1,temp;
  clrscr();

  printf("Enter any number: ");
  scanf("%d",&n);

  for(i=0;i<=n;i++)
  {
    printf("%d\t",x);
    temp = x;
    x = y;
    y = temp;
    x+=y;
  }

  getch();
}