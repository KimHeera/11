#include <stdio.h>

int main(void) {
  int num[100000]={0};
  int k,n;
  int count,count2;
  
  for(int i=0;num[i]!=-1;i++){
  scanf("%d",&num[i]);
  if (num[i]==0){
    break;
  }}

  for(int i=0;num[i]!=0;i++){
    for(n=num[i]+1;n<=2*num[i];n++){
      for(int j=1;j<=n;j++){
        if(n%j==0)
       count++;
       }
       if(count==2)
       count2++;
       count = 0;
       }
     printf("%d\n",count2);
     count2 = 0;
  }}