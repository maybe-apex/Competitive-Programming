#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a;
        for (int i = 0; i < n - 1; i++)
            cin >> b;
        cout << (a < b ? "YES\n" : "NO\n");
    }
    return 0;
}