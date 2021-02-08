#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main()
{
    long long n, m, q;
    cin >> n >> m >> q;
    long long arr[3];
    long long g = (m >= n ? gcd(m, n) : gcd(n, m));
    arr[1] = n / g;
    arr[2] = m / g;
    for (int i = 0; i < q; i++)
    {
        long long sx, sy, ex, ey;
        sy--, ey--;
        cin >> sx >> sy >> ex >> ey;
        cout << (ceil((double)sy / arr[sx]) == ceil((double)ey / arr[ex]) ? "YES\n" : "NO\n");
    }
    return 0;
}