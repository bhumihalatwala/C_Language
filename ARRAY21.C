#include <stdio.h>
//Create and find average of a 2D Array
int main() 
{
   int a,b,i,j;
   
   printf("Enter row size: ");
   scanf("%d", &i);
   printf("Enter column size: ");
   scanf("%d", &j);
   
   int array[i][j];
   float sum,avg;
   
 
   printf("Enter Array's element: \n");
   for(a=0;a<i;a++)
   {
      for(b=0;b<j;b++)
      {
          printf("a[%d][%d] = ",a,b);
          scanf("%d",&array[a][b]);
      }
    
   }
   
   for(a=0;a<i;a++)
   {
      for(b=0;b<j;b++)
      {
          sum += array[a][b];
          
      }
    
   }
   avg = sum/(a*b);
   printf("Average of this array is: %0.2f\n", avg);
  
   return 0;
}
