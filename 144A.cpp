#include <bits/stdc++.h>
int main()
{
  int n;
  scanf("%d",&n);
  int arr[n];
  int a = 0,low = INT_MAX,max = INT_MIN,j = 0;
  for(int i=0;i<n;i++) {
    scanf("%d",&arr[i]);
    if(arr[i] <= low) {
      low = arr[i];
      j = i;
    }
    if(arr[i] > max) {
      max = arr[i];
      a = i;
    }
  }
  if(j < a)
    j += 1;
  int swaps = (n-(j+1)) + a;
  printf("%d",swaps);
}
