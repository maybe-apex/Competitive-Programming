#include <iostream>
#include <cmath>
// #include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, k, a[10000], b[10000], d = 0;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        sort(b, b + n, greater<int>());
        sort(a, a + n);
        int maxb = b[0];
        for (int i = 0; i < k; i++)
        {
            if (a[i] < maxb)
            {
                a[i] = maxb;
                d++;
                maxb = b[d];
            }
        }

        int r = 0;

        for (int i = 0; i < n; i++)
        {
            r += a[i];
        }

        cout << r << endl;
    }

    return 0;
}