#include <stdio.h>
int main()
{
  int marks,age;
  printf("Enter your marks\n");
  scanf("%d", &marks);
  printf("Enter your age\n");
  scanf("%d", &age);
  switch (marks){
    case 40:
      printf("You got pass by 40\n");
      switch(age){
        case 10:
          printf("You are a kid");
          break;
        default:
          printf("you are not a kid"); 
      }
      break;
    case 45:
      printf("You got pass by 45\n");
      switch(age){
      case 10:
        printf("You are a kid");
        break;
      default:
        printf("you are not a kid"); 
      }
      break;
    default:
      printf("You are failing");
      break;

  }
  return 0;
}
