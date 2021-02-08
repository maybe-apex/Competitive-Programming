#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s, t, ans, k, q;
        cin >> n >> s;
        int pos = 1;
        t = s, ans = s;
        for (int i = 0; i < n; i++)
        {
            k = t.substr(i, n - i + 1);
            q = t.substr(0, i);
            if ((n - i) % 2)
                reverse(q.begin(), q.end());
            k += q;
            if (k < ans)
                ans = k, pos = i + 1;
        }
        cout << ans << endl
             << pos << endl;
    }
    return 0;
}