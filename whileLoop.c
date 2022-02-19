#include <stdio.h>
int main()
{
  int num, i = 0;
  printf("enter a number\n");
  scanf("%d", &num);
  printf("your number is %d of\n",num);

  while (i<num)
  {
    printf("%d\n", i+1);
    i= i+1;
  }
  
  return 0;
}
