#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, c = 0, ans = 0;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        for (int i = n - 1; i >= 0; i--)
        {
            c++;
            if (a[i] * c >= x)
                ans++, c = 0;
        }
        cout << ans << endl;
    }

    return 0;
}