#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;
    string a, b;
    cin >> a >> b;
    for (int i = 0; i < n; i++)
    {
        int k = abs(a[i] - b[i]);
        ans += min(k, 10 - k);
    }
    cout << ans;
    return 0;
}