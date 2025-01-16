#include <stdio.h>
// Find average of 1D Array
main()
{
  int i, size, arr[size], j;
  float sum = 0, avg;

  printf("Enter array size: ");
  scanf("%d", &size);
  printf("Enter array elements:\n ");

  for (i = 0; i < size; i++)
  {
    printf("arr[%d]: ", i);
    scanf("%d", &arr[i]);
  }
  for (j = 0; j < size; j++)
  {
    sum = sum + arr[j];
  }
  avg = sum / size;

  printf("Average of array is: %f", avg);
}
