#include <bits/stdc++.h>

using namespace std;

long long d[100001][2], m1, m2;

int main()
{
    int n;
    cin >> n;
    int a[n][2];
    for (int i = 0; i < n; i++)
        cin >> a[i][0];
    for (int i = 0; i < n; i++)
        cin >> a[i][1];
    for (int i = 0; i < n; i++)
    {
        d[i][0] = m2 + a[i][0];
        d[i][1] = m1 + a[i][1];
        m1 = max(m1, d[i][0]);
        m2 = max(m2, d[i][1]);
    }
    cout << max(m1, m2) << endl;
    return 0;
}