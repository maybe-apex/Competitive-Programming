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
        int a[n + 1], sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        for (int k = n; k > 0; k--)
        {
            int cur = 0, c = sum / k;
            for (int i = 0; i < n; i++)
            {
                cur += a[i];
                if (cur == c)
                    cur = 0;
            }
            if (!cur)
            {
                cout << n - k << endl;
                break;
            }
        }
    }

    return 0;
}