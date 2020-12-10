#include <bits/stdc++.h>
int main()
{
  int k,r,max = 10;
  scanf("%d %d",&k,&r);
  for(int i=1;i<10;i++) {
    if(k * i % 10 == 0){
      printf("%d",i);
      break;
    }
    if(k * i % 10 == r){
      printf("%d",i);
      break;
    }
  }
}
