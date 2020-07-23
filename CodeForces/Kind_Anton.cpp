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
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        bool possible = false;
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] == b[i])
                continue;
            else
            {
                if (a[i] > b[i])
                    for (int j = 0; j < i; j++)
                        if (a[i] == -1)
                            possible = true;
                if (b[i] > a[i])
                    for (int j = 0; j < i; j++)
                        if (a[i] == 1)
                            possible = true;
                if (!possible)
                {
                    cout << b[i] << " " << i << " "
                         << "NO\n";
                    break;
                }
            }
        }
        if (possible)
            cout << "YES\n";
    }

    return 0;
}