#include <bits/stdc++.h>

using namespace std;
long long n, a, i, b;
map<long long, long long> m;
int main()
{
    cin >> n;
    while (i++ < n)
        cin >> b, m[b - i] += b, a = max(a, m[b - i]);
    cout << a;
    return 0;
}