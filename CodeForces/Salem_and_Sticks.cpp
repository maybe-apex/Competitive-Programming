#include <iostream>
using namespace std;
int main()
{
    int n, x = 0, ans = 1e5, y;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 1; i <= 100; i++)
    {
        for (int j = 0; j < n; j++)
            x += min(abs(i - 1 - a[j]), min(abs(i - a[j]), abs(i + 1 - a[j])));
        if (x < ans)
            ans = x, y = i;
        x = 0;
    }
    cout << y << " " << ans;

    return 0;
}