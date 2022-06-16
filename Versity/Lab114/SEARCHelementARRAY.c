// Search an element in array
#include <stdio.h>
int main()
{
  int num[5]={100,200,300,400,500};
  int value,pos=-1,i;
  printf("Enter the value to search: ");
  scanf("%d", &value);
  for(i=0; i<5; i++)
  {
    if (value==num[i])
    {
      pos=i+1;
      break;
    }
  }
  if(pos==-1)
  {
    printf("Not Found");
  }
  else
  {
    printf("The value is found at %d position", pos);
    return 0;
  }
  
}