#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            int temp = a[i + 1];
            a[i + 1] = a[i];
            a[i] = temp;
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == b[i])
                count++;
        }
        ans = max(ans, count);
    }
    cout << ans;
    return 0;
}