#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,h,width = 0,a;
  cin >> n >> h;
  while(n)
  {
    cin >> a;
    if(h < a)
      width += 2;
    else
      width++;
    n--;
  }
  cout << width;
}
