#include <iostream>

using namespace std;

int main()
{
    int n, mn = 1e9, mx = 0;
    cin >> n;
    pair<int, int> a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
        mn = min(mn, a[i].first);
        mx = max(mx, a[i].second);
    }
    int i;
    bool found = false;
    for (i = 0; i < n; i++)
    {
        if (a[i].first <= mn && a[i].second >= mx)
        {
            found = true;
            break;
        }
    }
    cout << (found ? i + 1 : -1);
    return 0;
}