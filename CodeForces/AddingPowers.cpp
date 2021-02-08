#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int cnt = 0;
        set<long long> s;
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            while (x > 0)
            {
                long long d = 1;
                while (d * k <= x)
                    d *= k;
                x -= d;
                cnt++;
                s.insert(d);
            }
        }
        if (s.size() == cnt)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}