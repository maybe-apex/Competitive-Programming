#include <iostream>
#include <string>
// #include <bits/stdc++.h>
using namespace std;

int main()
{

  char a[1000], b[1000];
  cin >> a >> b;
  int x = strcmp(a, b);
  if (x > 0)
    cout << 1;
  if (x < 0)
    cout << -1;
  if (x == 0)
    cout << 0;

  return 0;
}
