#include<stdio.h>
#include<conio.h>

//print leap yr b/w 2 numbers using while loop
main()
{
 int m,n;
 clrscr();

 printf("Enter first year:");
 scanf("%d",&m);
 printf("Enter second year:");
 scanf("%d",&n);

 while(m<=n)
 {
   if(m%4==0)
   {
     printf("%d\t",m);
   }
   m++;
 }

 getch();
}