#include <stdio.h>
int main()
{
  int i;
  // for (i = 0; i <15; i++){
  //   printf("%d\n",i);
  // }
  
  // return 0;

  // for (i = 0; i <15; i++){
  //   printf("%d\n",i+1);
  // }
  
  // return 0;
  int num;
  printf("enter\n");
  scanf("%d",&num);
  printf("you have entered %d is\n",num);

    for (i = 0; i < num; i++){
    printf("%d\n",i+1);
  }
  
  return 0;
}
