#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, p;
        cin >> n >> p >> k;
        int a[n];
        for (auto &i : a)
            cin >> i;
        sort(a, a + n);
        for (int i = 2; i < n; i++)
            a[i] += a[i - 2];
        cout << upper_bound(a, a + n, p) - a << endl;
    }
    return 0;
}