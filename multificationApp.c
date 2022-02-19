#include <stdio.h>
/*
The multification app.
creat by aminul

*/
int main()
{
  int num;
  printf("Enter The Number which multification table you want = \n");
  scanf("%d",&num);
  printf("Your table %d is:\n ",num );
  /*
  for (int i= 0; i < 10; i++) 
  {
    
    printf("%d X %d = %d\n ", num, i+1 , (i+1)*num);
  }
  */
   for (int i= 1; i <= 10; i++) 
  {
    
    printf("%d X %d = %d\n ", num, i , i*num);
  }
  
  
  return 0; 
}
