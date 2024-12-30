#include <stdio.h>
#include <conio.h>

//find average marks
main()
{
   float math, eng, sci, avg;

   clrscr();

   printf("Enter maths marks: ");
   scanf("%f",&math);

   printf("Enter english marks: ");
   scanf("%f",&eng);

   printf("Enter science marks: ");
   scanf("%f",&sci);

   if(math>=0 && math<=100 && eng>=0 && eng<=100 && sci>=0 && sci<=100)
   {
     avg = (math + eng + sci) / 3;
     printf("Average marks: %0.2f\n",avg);
   }
   if(math<0 || math>100)
   {
     printf("Invalid maths marks\n");
   }
   if(eng<0 || eng>100)
   {
     printf("Invalid english marks\n");
   }
   if(sci<0 || sci>100)
   {
     printf("Invalid science marks\n");
   }
   getch();
}