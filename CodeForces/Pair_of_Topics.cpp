#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, count = 0, j = n - 1;
    long long r = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[i] -= x;
    }
    sort(a, a + n);
    for (int j = n; j; j--)
    {
        if (a[n - j] + a[n - 1] > 0)
            r += j - 1, n--;
    }
    cout << r;
    return 0;
}