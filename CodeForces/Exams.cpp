#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    pair<int, int> a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
        b[i] = min(a[i].first, a[i].second);
    }
    sort(b, b + n, greater<int>());
    cout << b[0];
    return 0;
}