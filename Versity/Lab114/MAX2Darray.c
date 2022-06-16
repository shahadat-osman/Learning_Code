// Find a maximum of 2D array
#include <stdio.h>
int main()
{
  int row, column, i, j, max;
  printf("Enter the matrix size: ");
  scanf("%d %d", &row, &column);
  int a[row] [column];
  printf("Enter the element: ");
  for(i=0; i<row; i++)
  {
    for(j=0; j<column; j++)
    {
      scanf("%d",&a[i] [j]);
    }
    printf("2d array is: \n");
    for(i=0; i<row; i++)
    {
      for(j=0; j<column; j++)
      {
        printf("%d", a[i] [j]);
      }
      printf(" \n");
    }
    int max=a[0] [0];
    for(i=0; i<row; i++)
    {
      for(j=0; j<column; j++)
      {
        if(max<a[i] [j])
        {
          max=a[i] [j];
        }
      }
    }
  }
  printf("Maximum number is %d", max);
  return 0;
}