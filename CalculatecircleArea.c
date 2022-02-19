#include <stdio.h>

int main()
//make a app for solve a problem of circle.
//  make area and circumference
{
  const float PI = 3.14159;
  float area,radius,circumference;

  printf("Enter the Radius of the circle \n");
  scanf("%f",&radius);
  area = PI*radius*radius;
  circumference = 2*PI*radius;
  printf("The area of the circle is =%f\n",area);
  printf("The circumference of the circle is =%f",circumference);
  return 0;
}