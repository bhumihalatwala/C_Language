#include<stdio.h>

//function parameters
void div(int);


int main()
{
	int num;
	
	div(num);		//function call
	
	return 0;
}


void div(int num)
{
	printf("Enter any number: ");
	scanf("%d",&num);
	
	if(num % 3 == 0 && num % 5 == 0)
	{
		printf("The given number is divisible by both 3 and 5");	
	}
	else
	{
		printf("The given number is not divisible by both 3 and 5");
	}

}
