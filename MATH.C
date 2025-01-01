#include<stdio.h>
#include<conio.h>

main()
{
 int a = 12;
 int b = 6;
 int sum = a + b;
 int diff = a - b;
 int multiply = a * b;
 int div = a / b;
 int mod = a % b;

 clrscr();

 printf("Addition of  %d and %d is %d\n",a,b,sum);
 printf("Subtraction of  %d and %d is %d\n",a,b,diff);
 printf("Multiplication of  %d and %d is %d\n",a,b,multiply);
 printf("Divison of  %d and %d is %d\n",a,b,div);
 printf("Modula of  %d and %d is %d\n\n",a,b,mod);

 printf(" %d + %d = %d\n",a,b,sum);
 printf(" %d - %d = %d\n",a,b,diff);
 printf(" %d * %d = %d\n",a,b,multiply);
 printf(" %d / %d = %d\n",a,b,div);
 printf(" %d %% %d = %d\n",a,b,mod);

 getch();
}
