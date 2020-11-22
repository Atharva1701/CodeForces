#include <bits/stdc++.h>
int main()
{
  int test_case;
  long int candies;
  scanf("%d",&test_case);
  while(test_case)
  {
    scanf("%ld",&candies);
    printf("%d\n", (candies - 1)/2);
    test_case--;
  }
}
