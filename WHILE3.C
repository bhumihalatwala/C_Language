#include<stdio.h>
#include<conio.h>

//print 1 to n using while loop
main()
{
 int i,n;
 clrscr();

 printf("Enter any number: ");
 scanf("%d",&n);

 i=1;
 while(i<=n)
 {
   printf("%d\t",i);
   i++;
 }
 getch();
}