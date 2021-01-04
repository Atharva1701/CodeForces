#include <bits/stdc++.h>
int main()
{
  int t;
  scanf("%d",&t);
  while(t--) {
    int n;
    scanf("%d",&n);
    std :: vector <int> s(n),a,b;
    for(auto &it : s)
      std :: cin >> it;
    sort(s.begin(),s.end());
    int result = s[n-1] - s[0];

    for(int i=0;i<n;i++)
      for(int j=i+1;j<n;j++)
        result = std :: min(result,s[j] - s[i]);

    std :: cout << result << std :: endl;
  }
}
