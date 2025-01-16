#include <stdio.h>
// Creating and reading dynamic 1D Array
main()
{
  int i, size, arr[size];

  printf("Enter array size: ");
  scanf("%d", &size);
  printf("Enter array elements:\n ");

  for (i = 0; i < size; i++)
  {
    printf("arr[%d]: ", i);
    scanf("%d", &arr[i]);
  }

  printf("Length of array is: %d", size);
}
