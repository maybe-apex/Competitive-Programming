#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        string s;
        bool possible = 1;
        cin >> s;
        int a[256];
        for (int i = 0; i < 256; i++)
            a[i] = 0;
        x > 0 ? a['R'] = abs(x) : a['L'] = abs(x);
        y > 0 ? a['U'] = abs(y) : a['D'] = abs(y);
        for (int i = 0; i < s.size(); i++)
        {
            if (a[s[i]] > 0)
                a[s[i]]--;
        }
        for (auto i : a)
            if (i > 0)
                possible = 0;
        cout << (possible ? "YES\n" : "NO\n");
    }

    return 0;
}