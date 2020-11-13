#include <bits/stdc++.h>
int main()
{
  int no_of_test_cases,a,b;
  scanf("%d",&no_of_test_cases);

  for(int i=0;i<no_of_test_cases;i++) {
    scanf("%d %d",&a,&b);
    if(a % b == 0) {
      std :: cout << 0 << std::endl;
    }
    else {
      std :: cout << b - (a % b) <<std :: endl;
    }
  }
}
