#include <stdio.h>
#include <math.h>
int main()
{
  const float PI = 3.1416;
  float area, volume, r;
  printf("Enter the value of the r\n");
  scanf("%f", &r);
  area = 4*PI*r*r;
  volume = (4*PI*r*r*r)/3;
  
  printf("The area of this cube is = %f\n",area);
  printf("The volume of this cube is = %f\n",volume);
  
  return 0;
}
