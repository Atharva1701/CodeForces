#include <bits/stdc++.h>
int main()
{
    int n;
    scanf("%d",&n);

    std :: vector<std :: vector<int>> vec(n,std :: vector<int> (n));

    for(int i=0;i<vec.size();i++) {
      for(int j=0;j<vec[i].size();j++) {
        if(i == 0 || j == 0)
          vec[i][j] = 1;
        else
          vec[i][j] = vec[i-1][j] + vec[i][j-1];
      }
    }
    std :: cout << vec[n-1][n-1];
}
