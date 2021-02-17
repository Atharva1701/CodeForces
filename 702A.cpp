#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base :: sync_with_stdio(0);
  cin.tie(0);

  int n,count = 0,nax = 0;
  cin >> n;
  vector<int> v(n);

  for(auto& it : v)
    cin >> it;
  for(int i=0;i<v.size();i++){
    if(v[i] > v[i-1])
      count++;
    else{
      count = 1;
    }
    nax = max(count, nax);
    // if(i+1 == n && cnt > count)
    //   cnt++;
    // else if(i+1 == n && cnt < count)
    //   count++;
  }
  // if(cnt == 0 && count == 0)
  //   cnt++;
  // if(cnt > count)
  //   cout << cnt << endl;
  // else
    cout << nax << endl;
}
