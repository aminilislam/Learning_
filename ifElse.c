#include <stdio.h>

int main()
{
  int science, math;
  printf("Enter your score in Science in your final exam\n");
  scanf("%d", &science);
  printf("Enter your score in Math in your final exam\n");
  scanf("%d", &math);
  if (science > 33 & math >33)
  {
    printf("Congratulations!!! You are got 45 tk for passed these 2 subject");
  }
 
  else if(science > 33 || math > 33){
    printf("Congratulations!!! You are got 15 tk for passed 1 subject");
  }

  else {
    printf("Sorry !!! You are not crack the exam try next time");
  }
  
  return 0;
}
