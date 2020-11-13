#include <bits/stdc++.h>
int main()
{
  int n,faces = 0;
  scanf("%d",&n);
  int tt = 4,cu = 6,oct = 8,doc = 12,ico = 20;
  std :: string polyhedrons;
  while(n)
  {
    std :: cin >> polyhedrons;
    if(polyhedrons == "Tetrahedron")
      faces += tt;
    else if(polyhedrons == "Cube")
      faces += cu;
    else if(polyhedrons == "Octahedron")
      faces += oct;
    else if(polyhedrons == "Dodecahedron")
      faces += doc;
    else if(polyhedrons == "Icosahedron")
      faces += ico;
    n--;
  }
  printf("%d",faces);
}
