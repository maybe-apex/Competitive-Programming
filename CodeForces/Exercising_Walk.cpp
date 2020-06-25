#include <iostream>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c, d, x, y, s, t, u, v;
        cin >> a >> b >> c >> d >> x >> y >> s >> t >> u >> v;
        if (b - a + x < s || b - a + x > u || d - c + y < t || d - c + y > v || (s == u && a + b) || (t == v && c + d))
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}