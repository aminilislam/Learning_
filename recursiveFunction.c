#include <stdio.h>
int factorial(int number){
  if (number == 1 || number == 0)
  {
    return 1;
  }
  else
  {
    int a = (number * factorial(number-1));
    return a;
  }
  
  
}

int main()
{
  int num;
  printf("Enter The Number which factorial you want\n");
  scanf("%d", &num);
  int c = factorial(num);
  printf("factorial of %d is %d",num, c);
  
  return 0;
}
