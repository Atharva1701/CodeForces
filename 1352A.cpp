#include <bits/stdc++.h>
int main()
{
  int no_tests;
  scanf("%d",&no_tests);
  while(no_tests--) {
    int num;
    scanf("%d",&num);
    std :: vector<int> round;
    int cnt = 1;
    while(num > 0) {
      if(num % 10 > 0) {
        round.push_back((num % 10) * cnt);
      }
      num /= 10;
      cnt *= 10;
    }
    printf("%d\n",round.size());
    for(auto i : round)
      printf("%d ",i);
    printf("\n");
  }

}
