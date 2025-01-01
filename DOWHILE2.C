#include<stdio.h>
#include<conio.h>

//print even num from 1 to n using do while loop
main()
{
  int i,n;
  clrscr();

  printf("Enter any number: ");
  scanf("%d",&n);

  i=1;
  do
  {
     if(i%2==0)
     {
       printf("%d\t",i);
     }
     i++;
  } while(i<=n);

  getch();
}