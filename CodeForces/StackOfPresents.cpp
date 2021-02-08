#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n, c;
        cin >> n >> m;
        vector<long> a(n + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> c;
            a[c] = i;
        }
        int j = 1, k;
        long long s = 0;
        for (int i = 0; i < m; i++)
        {
            cin >> c;
            k = a[c];
            if (k < j)
                s++;
            else
            {
                s += 2 * (k - i) + 1;
                j = k;
            }
        }
        cout << s << endl;
    }
    return 0;
}