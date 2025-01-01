#include<stdio.h>
#include<conio.h>

//print 10 to 1 using while loop
main()
{
 int i;
 clrscr();

 i = 10;
 while(i>=1)
 {
   printf("%d\t",i);
   i--;
 }
 getch();
}