#include <iostream>

using namespace std;

int main()
{
    int n, d, m, x, y;
    cin >> n >> d >> m;
    for (int i = 0; i < m; i++)
    {
        bool ok = true;
        cin >> x >> y;
        int sum = x + y;
        int diff = x - y;
        if (!(sum >= d && sum <= 2 * n - d))
            ok = false;
        else if (!(diff >= -1 * d && diff <= d))
            ok = false;
        else
            ok = true;
        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}