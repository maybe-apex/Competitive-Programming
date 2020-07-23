#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin >> n >> t;
    int a[n], sum = 0, l = 0, res = 0, mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        res++;
        while (sum > t)
        {
            sum -= a[l++];
            res--;
        }
        mx = (res > mx ? res : mx);
    }
    cout << mx;
    return 0;
}