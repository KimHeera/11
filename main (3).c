#include <stdio.h>

int main(void) {

  int test_casen, std_n;
  int score, sum;

  scanf("%d", &test_casen);

  for(int i=0;i<=test_casen;i++){
    sum=0;
    int cnt=0;
    float avg;

    scanf("%d", &std_n);

    int arr[std_n];

    for(int j=0;j<std_n;j++){
      scanf("%d", &arr[j]);
      sum+=arr[j];
    }

    avg=sum/std_n;
    for(int y=0;y<std_n;y++){
      if(avg<arr[y])
        cnt++;
    printf("%.3f%% \n", (float)cnt/std_n*100);
  }
} 
}