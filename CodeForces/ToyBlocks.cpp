#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, s = 0, m = 0;
        cin >> n;
        long long a[n];
        for (auto i : a)
        {
            cin >> i;
            s += i;
            m = max(m, i);
        }
        m *= (n - 1);
        if (s <= m)
            cout << m - s << endl;
        else if (s % (n - 1))
            cout << n - 1 - s % (n - 1) << endl;
        else
            cout << "0\n";
    }

    return 0;
}