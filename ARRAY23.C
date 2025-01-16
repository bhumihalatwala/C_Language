#include <stdio.h>
//Find sum of anti-diagonal elements
int main() 
{
    int n;

    printf("Enter the array's row & column size: ");
    scanf("%d", &n);

    int arr[n][n];

    printf("Enter array's elements:\n");
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++)
        {
            printf("arr[%d][%d] = ",i,j);
            scanf("%d", &arr[i][j]);
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++) 
    {
        sum += arr[i][n - 1 - i];
    }

    printf("The sum of anti-diagonal elements of an array: %d\n", sum);

    return 0;
}
