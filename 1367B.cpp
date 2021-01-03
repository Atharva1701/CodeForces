#include <bits/stdc++.h>
int main()
{
  int t;
  scanf("%d",&t);
  while(t--) {
    int n;
    scanf("%d",&n);
    int a = 0,b = 0;
    for(int i=0;i<n;i++){
      int x;
      std :: cin >> x;
        if(x % 2 != i % 2){
          if(i % 2 == 0)
            a++;
          else
            b++;
        }
    }
    if(a != b)
      std :: cout << -1 << std :: endl;
    else
      std :: cout << a << std :: endl;
  }
}
