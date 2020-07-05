#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, m, mx = 0;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    int ans = mx + m;
    for (int i = 0; i < n; i++)
        if (a[i] < mx)
            while (a[i] < mx && m > 0)
                a[i]++, m--;
    int i = 0;
    while (m--)
    {
        a[(i++) % n]++;
    }
    sort(a, a + n, greater<int>());
    cout << a[0] << " " << ans;

    return 0;
}