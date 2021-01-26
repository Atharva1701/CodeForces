#include <bits/stdc++.h>
int main()
{
  int n;
  scanf("%d",&n);
  std :: vector<int> v(n);
  std :: vector<int> s{0,0};
  for(auto& it : v)
    std :: cin >> it;
  int front = 0,rear = v.size() - 1,i = 0;
  while(front <= rear){
    if(v[front] > v[rear]) {
      s[i] += v[front];
      front++;
    }
    else {
      s[i] += v[rear];
      rear--;
    }
    i = 1 - i;
  }
  std :: cout << s[0] << " " << s[1];
}
