#include<bits/stdc++.h>
int main()
{
    int y,w;
    std :: cin >> y >> w;
    y = std :: max(y,w);
    y = 6 - y + 1;
    int d = std :: __gcd(y,6);
    y /= d;
    std :: cout << y << '/' << 6 / d;
}
