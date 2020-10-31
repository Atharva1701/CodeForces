#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,problem;;
  cin >> n;
  bool diff = false;
  while(n)
  {
    cin >> problem;
    if(problem == 1)
      diff = true;
    n--;
  }
  if(diff == true)
    cout << "HARD";
  else
    cout << "EASY";
}
