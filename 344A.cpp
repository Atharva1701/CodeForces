#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,group = 0,a,b;
  cin >> n;
  for(int i=0;i<n;i++)
  {
    cin >> a;
    if(a != b)
      group++;
    b = a;
  }
  cout << group;
}
