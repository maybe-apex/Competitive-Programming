#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    pair<long long, long long> a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
        a[i].first *= -1;
    }
    sort(a, a + n);
    cout << count(a, a + n, a[k - 1]);

    return 0;
}