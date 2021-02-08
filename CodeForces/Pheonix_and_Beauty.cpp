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
        set<int> s;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
            a[i] = x;
        }
        if (s.size() > k)
            cout << -1 << endl;
        else
        {
            cout << n * k << endl;
            for (int i = 1; i <= n; i++)
            {
                for (auto x : s)
                    cout << x << " ";
                for (int j = 1; j <= k - s.size(); j++)
                    cout << 1 << " ";
            }
            cout << endl;
        }
    }
    return 0;
}