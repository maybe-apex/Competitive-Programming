#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        int x = sum / n;
        sort(b, b + n);
        for (int i = n - 1; i >= 0; i--)
        {
            b[i] -= b[n / 2];
        }
    }

    return 0;
}