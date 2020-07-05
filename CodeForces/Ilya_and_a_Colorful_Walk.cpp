#include <iostream>

using namespace std;

int main()
{
    long long l = 0, a[1000000], n, r;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    r = n - 1;
    while (a[l] == a[n - 1])
        l++;
    while (a[r] == a[0])
        r--;
    cout << max(n - l - 1, r);
    return 0;
}