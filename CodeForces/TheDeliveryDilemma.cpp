#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<array<long long, 2>> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i][0];
        for (int i = 0; i < n; i++)
            cin >> a[i][1];
        long long p = 0, d = 1e18;
        sort(a.begin(), a.end());
        for (int i = n - 1; i >= 0; i--)
        {
            d = min(d, max(a[i][0], p));
            p += a[i][1];
        }
        cout << min(p, d) << endl;
    }

    return 0;
}