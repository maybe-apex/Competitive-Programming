#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    long long n, m, mn = 0, size = 0;
    cin >> n >> m;
    long long a[n], b[n], sm[n];
    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i], mn += b[i], sm[i] = a[i] - b[i], size += a[i];
    if (mn > m)
        return cout << "-1", 0;
    sort(sm, sm + n, greater<int>());
    int i = 0;
    while (size > m)
        size -= sm[i], i++;
    cout << i;
    return 0;
}