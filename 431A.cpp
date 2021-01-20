#include <bits/stdc++.h>
int main()
{
  int a1,a2,a3,a4,cal = 0;
  scanf("%d %d %d %d",&a1,&a2,&a3,&a4);

  std :: string proc;
  std :: cin >> proc;

  for(int i=0;i<proc.size();i++){
    if(proc[i] == '1')
      cal += a1;
    if(proc[i] == '2')
      cal += a2;
    if(proc[i] == '3')
      cal += a3;
    if(proc[i] == '4')
      cal += a4;
  }
  std :: cout << cal;
}
