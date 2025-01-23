// Write a Program to find the sum of all ID Array elements by passing an array as an argument using UDF.

#include <stdio.h>

void sum(int a[], int size)
{
    int sum = 0, i;
    
    for(i = 0; i < size; i++)
    {
        sum = sum + a[i];
    }
    
    printf("Sum of Array is %d",sum);
}

int main() 
{
    
    int size,i;
    
    printf("Enter size of array: ");
    scanf("%d",&size);
    
    int a[size];
    
    printf("Enter elements of array: \n");
    for(i = 0; i < size; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    
    sum(a,size);
    
    return 0;
}
