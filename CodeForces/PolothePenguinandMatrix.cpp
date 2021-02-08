#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, m, d, k = 0, ans = 0;
    cin >> n >> m >> d;
    int a[n + 2][m + 2];
    int b[n * m];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            b[k++] = a[i][j];
        }
    }
    sort(b, b + n * m);
    int x = b[(n * m) / 2];
    for (auto i : b)
    {
        if (i % d != x % d)
            return cout << "-1" << endl, 0;
        ans += (abs)((i - x)) / d;
    }
    cout << ans << endl;

    return 0;
}