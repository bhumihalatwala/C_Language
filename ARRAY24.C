#include <stdio.h>
//Print and find sum of all boundary elements from 5x5 matrix
int main() 
{
    int arr[5][5];
    int i, j, sum = 0;

    printf("Enter elements of the 5x5 array:\n");
    for (i = 0; i < 5; i++) 
    {
        for (j = 0; j < 5; j++) 
        {
            printf("arr[%d][%d] = ", i,j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < 5; i++) 
    {
        for (j = 0; j < 5; j++) 
        {
            if (i == 0 || i == 4 || j == 0 || j == 4) 
            {  
                printf("%d ",arr[i][j]);
                sum += arr[i][j];
            }
            else 
            printf("  ");
        }
        printf("\n");
    }

    printf("Sum of boundary elements: %d\n", sum);

    return 0;
}
