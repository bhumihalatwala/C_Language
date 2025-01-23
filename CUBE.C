#include<stdio.h>

//function parameters
void cube(int);


int main()
{
	int num;
	
	cube(num);		//function call
	cube(num);
	cube(num);
	
	return 0;
}


void cube(int num)
{
	printf("Enter any number: ");
	scanf("%d",&num);
	
	int cube;
	cube = num*num*num;
	printf("Cube is: %d",cube);
}
