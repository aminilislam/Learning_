#include <stdio.h>
#include <math.h>

int main()
{
  int base, power,result;

  printf("Enter the base number\n");
  scanf("%d",&base);
  printf("Enter the power number\n");
  scanf("%d",&power);
  result = pow(base, power);
  printf("\nResult is %d",result);

  return 0;
}