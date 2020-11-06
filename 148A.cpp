#include <bits/stdc++.h>
using namespace std;
int main()
{
  int k,l,m,n,d,count = 0;
  cin >> k >> l >> m >> n >> d;

  for(int i=0;i<=d;i++) {
    if(i % k && i % l && i % m && i % n)
      count++;
  }
  cout << d - count;

}
