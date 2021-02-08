#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k, pos = 0;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int j = 0; j < k; j++)
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (a[i] < a[i + 1])
                {
                    a[i]++;
                    pos = i + 1;
                    goto r;
                }
            }
            cout << "-1\n";
            goto s;
        r:;
        }
        cout << pos << endl;
    s:;
    }

    return 0;
}