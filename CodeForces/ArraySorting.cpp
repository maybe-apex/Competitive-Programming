#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    int b[n - 1];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i > 0)
            b[i - 1] = -1 * (a[i] - a[i - 1]);
    }
    sort(b, b + n - 1);
    int res = a[n - 1] - a[0];
    for (int i = 0; i < k - 1; i++)
        res += b[i];
    cout << res;
    return 0;
}