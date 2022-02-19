#include <stdio.h>
#include <math.h>
int main()
{
  float celcius;
  float fahrenheit;
  printf("Enter Temperature In Celcius\n");
  scanf("%f", &celcius);
  fahrenheit =(1.8*celcius)+32;
  printf("Temperature In Fahrenheit %fF",fahrenheit);
  return 0;
}
