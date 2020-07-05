#include <iostream>
// #include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    long long x = 0, y = 0;
    int a[n + 1], i;
    for (i = 0; i < n; i++)
        cin >> m, a[m] = i;
    cin >> m;
    while (m--)
    {
        cin >> i;
        x += a[i] + 1;
        y += n - a[i];
    }
    cout << x << " " << y;

    return 0;
}
