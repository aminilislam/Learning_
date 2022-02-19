#include <stdio.h>
#include <math.h>
int main()
{
  float a,area;
  printf("Enter size of side of the equilateral triangle:");
  scanf("\n%f", &a);
  // area = 0.433012*a*a;
  area = sqrt(3)/4*(a*a);
  printf("Area of side of the equilateral triangle is:%.3f",area);
  return 0;
}
