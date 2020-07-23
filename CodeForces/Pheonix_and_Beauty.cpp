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
            auto it = s.begin();
            for (int i = 0; i < 2 * s.size(); i++)
            {
                if (it == s.end())
                    it = s.begin();
                cout << *it++;
                if (i == s.size() - 1)
                {
                    while ()
                }
            }
        }
        return 0;
    }