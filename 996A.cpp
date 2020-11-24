#include <bits/stdc++.h>
int main()
{
  long int n;
  scanf("%ld",&n);
  int bill[5] = {0};
  int notes = 0,bills[5] = {100,20,10,5,1};
  for(int i=0;i<5;i++) {
    if(n >= bills[i]) {
      bill[i] = n / bills[i];
      n = n - bill[i] * bills[i];
    }
  }
  for(int i=0;i<5;i++) {
    notes += bill[i];
  }
  printf("%d",notes);
}
