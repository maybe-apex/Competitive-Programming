#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 1], dp[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            dp[i] = 1;
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = i; j <= n; j += i)
            {
                if (a[j] > a[i])
                    dp[j] = max(dp[j], dp[i] + 1);
            }
        }

        cout << *max_element(dp + 1, dp + n + 1) << "\n";
    }

    return 0;
}