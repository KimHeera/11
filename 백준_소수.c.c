#include <stdio.h>

int main(void) {
  int num1, num2, i;

  printf("자연수 2개 입력: ");
  scanf("%d %d", &num1, &num2);

  for(;num1<=num2;num1++){
    for(i=2;i<=num1;i++){
      if(num1%i==0) 
      break;
    }
    
    if(num1==i){
      printf("%d\n", num1);
    }
  }


  return 0;
}