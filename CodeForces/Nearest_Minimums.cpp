#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, mn = 1e5;
    cin >> n;
    pair<int, int> a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a, a + n);
    int i = 0;
    while (a[i].first == a[i + 1].first)
    {
        mn = min(mn, abs(a[i].second - a[i + 1].second));
        i++;
    }
    cout << mn;

    return 0;
}