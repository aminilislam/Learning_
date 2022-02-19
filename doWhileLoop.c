#include <stdio.h>
int main()
{
  int num, i = 0;
  printf("whice number do you want ");
  scanf("%d", &num);
  do
  {
    printf("%d\n", i+1);
    i = i + 1;
  } while(i<num);
  
  
  return 0;
}
