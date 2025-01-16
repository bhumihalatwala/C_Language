#include <stdio.h>
// Addition of two 1D Arrays
int main()
{
    int size, i;

    printf("Enter array size: ");
    scanf("%d", &size);

    int a[size], b[size], c[size];

    printf("Enter Array A's element: \n");
    for (i = 0; i < size; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("Enter Array B's element: \n");
    for (i = 0; i < size; i++)
    {
        printf("b[%d] = ", i);
        scanf("%d", &b[i]);
    }

    printf("Addition of both arrays is: \n");
    for (i = 0; i < size; i++)
    {
        c[i] = a[i] + b[i];
        printf("c[%d] = %d\n", i, c[i]);
    }

    return 0;
}
