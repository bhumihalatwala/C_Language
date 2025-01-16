#include <stdio.h>
//Addition of 2 2D Arrays
int main() 
{
   int a,b,i,j;
   
   printf("Enter row size: ");
   scanf("%d", &i);
   printf("Enter column size: ");
   scanf("%d", &j);
   
   int arr1[i][j], arr2[i][j], arr3[i][j];
   int sum;
   
 
   printf("Enter Array 1's element: \n");
   for(a=0;a<i;a++)
   {
      for(b=0;b<j;b++)
      {
          printf("arr1[%d][%d] = ",a,b);
          scanf("%d",&arr1[a][b]);
      }
    
   }
   
   printf("Enter Array 2's element: \n");
   for(a=0;a<i;a++)
   {
      for(b=0;b<j;b++)
      {
          printf("arr2[%d][%d] = ",a,b);
          scanf("%d",&arr2[a][b]);
      }
    
   }
   
   printf("Array C is: \n");
   for(a=0;a<i;a++)
   {
      for(b=0;b<j;b++)
      {
          arr3[a][b] = arr1[a][b] + arr2[a][b];
          printf("%d ", arr3[a][b]);
          
          if(b==j-1)
          printf("\n");
      }
    
   }
  
   return 0;
}
