#include <stdio.h>
int sum(int a, int b);

// void printstar(int n){
//   for (int i = 0; i < n; i++)
//   {
//     printf("%c", '*');
//   }
  
// }

// int takenumber(){
//   int i;
//   printf("enter the numver\n");
//   scanf("%d", &i);
//   return i;
// }

// int main()
// {
//   int c ,a,b;
//   a = 44;
//   b = 44;
//   // c = sum(a,b);
//   c = takenumber();
//   printf("The number is %d",c);
//   // printstar(88);
//   return 0;
// }
// int sum(int a, int b){

//   return a + b;
  
// }

int sum(int m, int n){
  int c = m + n;

  return c;
}
int main()
{
  int a,b,ans;
  printf("Enter Tow Numbers\n");
  scanf("%d %d",&a,&b);
  ans = sum(a,b);
  printf("sum is %d",ans);
  
  return 0;
}
