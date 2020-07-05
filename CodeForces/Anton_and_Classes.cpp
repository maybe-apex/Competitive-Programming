#include <iostream>
#include <algorithm>
using namespace std;

long long n, m, a, b = 9.223372037E17, c, d = 9.223372037E17, x, y;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        a = max(a, x);
        b = min(b, y);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        c = max(c, x);
        d = min(d, y);
    }
    cout << max((long long)0, max(c - b, a - d));

    return 0;
}