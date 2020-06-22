#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, a[100000], x;
    pair<int, int> b[10000];
    cin >> n >> x;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n - x; i++)
    {
        b[i].first = a[i];
        for (int j = 1; j < x; j++)
            b[i].first += a[i + j];
        b[i].second = i;
    }
    sort(b + 1, b + n - x + 1);
    cout << (n == x ? 1 : b[1].second);
    return 0;
}
