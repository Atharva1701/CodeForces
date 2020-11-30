#include <bits/stdc++.h>
int main()
{
  int n,k,time = 240,sum = 0;
  scanf("%d %d",&n,&k);

  int problem = 0,i=1;
  while(n) {
    int minutes = 5*i;
    sum += minutes;
    if(sum + k <= time) {
      problem++;
    }
    i++;
    n--;
  }
  std :: cout << problem;
}
