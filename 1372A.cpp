#include <bits/stdc++.h>
void test_cases()
{
  int n;
  scanf("%d",&n);
  std :: vector<int> vec(n);
  for(int i=1,k=0;i<=1000 && k<vec.size();i++,k++){
    vec[k] = i;
    for(int j=i+1,z=0;j<=1000 && z<vec.size();j++,z++){
      vec[z] = j+2;
    }
  }
  for(int i=0;i<vec.size();i++){
    for(int j=i+1;j<vec.size();j++){
      for(int x=j+1;x<vec.size();x++){
        if(vec[i] + vec[j] == vec[x]){
          vec[j] += 3;
        }
      }
    }
  }
  for(int i=0;i<vec.size();i++){
    if(vec[i] > 1000)
      vec[i] = 999;
  }
  for(int i : vec)
    std :: cout << i << ' ';
  std :: cout << std :: endl;
}
int main()
{
  int tt;
  scanf("%d",&tt);
  while(tt--){
    test_cases();
  }
}
