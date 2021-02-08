#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[2][n + 1];
        int p[m + 1], c[10] = {0};
        map<int, int> mp;
        for (int i = 1; i <= 9; i++)
            mp[i] = 0;
        for (int i = 1; i <= n; i++)
            cin >> a[0][i];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[1][i];
            if (a[0][i] != a[1][i])
                mp[a[1][i]]++;
        }
        for (int i = 1; i <= m; i++)
        {
            cin >> p[i];
            mp[p[i]]--;
        }
        for (int i = 1; i <= 9; i++)
        {
            if (mp[i] < 0)
            {
                cout << "NO";
                goto r;
            }
        }

    r:;
    }

    return 0;
}