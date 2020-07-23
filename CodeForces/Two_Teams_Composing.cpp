#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s = 0, t = 0, x;
        cin >> n;
        int a[200001] = {};
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            a[x]++;
            s += a[x] == 1;
            t = max(t, a[x]);
        }
        cout << max(min(s, t - 1), min(t, s - 1)) << endl;
    }
    return 0;
}