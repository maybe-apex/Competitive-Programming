#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a[3] = {};
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a[x % 3]++;
        }
        int mn = min(a[1], a[2]);
        cout << a[0] + (a[1] + a[2] - 2 * mn) / 3 + mn << endl;
    }
    return 0;
}