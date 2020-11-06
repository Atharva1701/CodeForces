#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,p,y,count = 0;;
  cin >> n;
  int arr[201];
  cin >> p;
  for(int i=0;i<p;i++)
    cin >> arr[i];

  cin >> y;
  for(int i=p;i<p+y;i++)
    cin >> arr[i];

  sort(arr,arr+p+y);

  for(int i=0;i<p+y;i++)
  {
    if(arr[i] != arr[i+1])
      count++;
  }
  if(count == n)
    cout << "I become the guy.";
  else
    cout << "Oh, my keyboard!";
}
