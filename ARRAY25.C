#include<stdio.h>
//Merge 2 2D Arrays
int main()
{
	int r1,c1,r2,c2;
	
  	printf("Enter number of rows for first array : ");
  	scanf("%d",&r1);
  	
  	printf("Enter number of columns for first array : ");
  	scanf("%d",&c1);
  	
  	printf("Enter number of rows for second array : ");
  	scanf("%d",&r2);
  	
  	printf("Enter number of columns for second array : ");
  	scanf("%d",&c2);
  	
	if(r1 != r2)
	{
		printf("arrays cannot be merged");
	}
	
	int arr1[r1][c1];
	int arr2[r2][c2];
	int arr3[r1][c1+c2],i,j;
	
	printf("Enter elements for first array : \n");
	
	for(i = 0; i < r1; i++)
	{
		for(j = 0; j < c1; j++)
		{
			printf("Arr1[%d][%d] : ",i,j);
			scanf("%d",&arr1[i][j]);	
		}
	}
	
	printf("Enter elements for second array : \n");
	
	for(i = 0; i < r2; i++)
	{
		for(j = 0; j < c2; j++)
		{
			printf("Arr2[%d][%d] : ",i,j);
			scanf("%d",&arr2[i][j]);	
		}
	}


	
	for(i = 0; i < r1; i++)
	{
		for(j = 0; j < c1; j++)
		{
		   	arr3[i][j] = arr1[i][j];
		}
		
		for(j = c1; j < c1+c2; j++)
		{
		   	arr3[i][j] = arr2[i][j-c1];
		}
	}
	
	printf("Merged Array : \n");
	
	for(i = 0; i < r1; i++)
	{
		for(j = 0; j < c1+c2; j++)
		{
			printf("%d ",arr3[i][j]);	
		}
		printf("\n");
	}
	
  	

	

  	
  	return 0;
}
