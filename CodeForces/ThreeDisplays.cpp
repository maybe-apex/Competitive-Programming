#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, ans = 1e9;
    cin >> n;
    long long a[n + 1], b[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        cin >> b[i];
    for (int i = 1; i <= n; i++)
    {
        long long x = 6e8, y = 6e8;
        for (int j = 1; j < i; j++)
        {
            if (a[j] < a[i])
                x = min(x, b[j]);
        }
        for (int j = n; j > i; j--)
        {
            if (a[j] > a[i])
                y = min(y, b[j]);
        }
        ans = min(ans, x + y + b[i]);
    }
    (ans > 5e8) ? ans = -1 : 0;
    cout << ans << endl;

    return 0;
}