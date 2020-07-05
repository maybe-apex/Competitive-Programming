#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n], s = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i], s += a[i];
        if (m < n || n == 2)
        {
            cout << -1 << endl;
            continue;
        }
        cout << 2 * s << endl;
        for (int i = 0; i < n; i++)
            cout << i + 1 << " " << (i + 1) % n + 1 << endl;
    }
    return 0;
}