#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
using namespace std;

int main()
{

    int t, x;
    cin >> t;

    while (t--)
    {
        int n, ans = 1e9;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        for (int i = 1; i < n; i++)
            ans = min(ans, a[i] - a[i - 1]);
        cout << ans << endl;
    }

    return 0;
}