#include <iostream>

using namespace std;

int main()
{
    long long l1, r1, l2, r2, k, x, y;
    cin >> l1 >> r1 >> l2 >> r2 >> k;
    y = max(l1, l2);
    x = min(r1, r2);
    if (k >= y && k <= x)
        x--;
    long long ans = x - y + 1;
    cout << (ans >= 0 ? ans : 0);
    return 0;
}