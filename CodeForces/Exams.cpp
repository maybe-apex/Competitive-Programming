#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, ans = 0;
    cin >> n;
    pair<int, int> a[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        ans = (ans <= a[i].second) ? a[i].second : a[i].first;
    }
    cout << ans;
    return 0;
}