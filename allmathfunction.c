#include <stdio.h>

int add(int a , int b);
int sub(int a , int b);
float divide(float a , float b);
int multiply(int a , int b);

int main()
{
  int a,b;
  printf("Enter Tow Numbers\n");
  scanf("%d %d",&a,&b);
  int addition = add(a,b);
  int substitution = sub(a,b);
  int multiplication = multiply(a,b);
  float division = divide(a,b);
  printf("The answer is\n%d \n%d \n%d \n%.2f",addition,substitution,multiplication,division);
  return 0;
}

 int add(int a, int b){
  int c = a+b;
  return c;
}
 int sub(int a, int b){
  int c = a-b;
  return c;
}
 int multiply(int a, int b){
  int c = a*b;
  return c;
}
float divide(float a, float b){
  float c = a/b;
  return c;
}

