#include<stdio.h>
#include<conio.h>

//print multiplication table using any loop
main()
{
  int n,i,product=1;
  clrscr();

  printf("Enter any number: ");
  scanf("%d",&n);

  for(i=1;i<=10;i++)
  {
    product = n*i;
    printf("%d * %d = %d\n",n,i,product);
  }
  getch();
}