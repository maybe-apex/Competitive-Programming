#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, k;
        cin >> a >> b >> k;
        int x[k], y[k], X[k + 1], Y[k + 1];
        for (int i = 0; i < k; i++)
            x[i] = y[i] = X[i] = Y[i] = 0;
        for (int i = 0; i < k; i++)
        {
            cin >> x[i];
            X[x[i]]++;
        }
        for (int i = 0; i < k; i++)
        {
            cin >> y[i];
            Y[y[i]]++;
        }
        int ans = 0;
        for (int i = 0; i < k; i++)
        {
            ans += k + 1 - (X[x[i]] + Y[y[i]]);
        }
        cout << ans / 2 << endl;
    }

    return 0;
}