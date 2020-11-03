#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,p,orange_percent = 0;
  cin >> n;
  double answer = 0.0;
  double div = n * 100.0;
  while(n)
  {
    cin >> p;
    orange_percent += p;
    n--;
  }
  answer = (orange_percent * 100.0) / div;
  cout << fixed << setprecision(12) << answer;
}
