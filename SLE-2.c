#include <stdio.h>

//첫째 줄에 N(1 ≤ N ≤ 1,000,000,000)이 주어진다.
//입력으로 주어진 방까지 최소 개수의 방을 지나서 갈 때 몇 개의 방을 지나는지 출력한다.

int main(void) {

  int n, i=2, gap=5, room_number=2; //입력받을 변수, 조건문을 계산하기 위한 변수, 방 사이의 갭, 최소개수의 방 변수 선언

  printf("숫자를 입력:");
  scanf("%d", &n);

  if(n==1){ //입력받은 수가 1일때는 방 개수를 1로 출력
      room_number=1;
      printf("%d",room_number);
      return 0;
    }

  while(1){ //무한
    if(i<=n && i+gap>=n){ //
      printf("%d", room_number);
      break;
    }
    i=i+gap+1;
    gap+=6;
    room_number++;
    }
  }
