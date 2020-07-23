#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, count = 0, j = n - 1;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[i] -= x;
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            int s = a[i] + a[j];
            if (s <= 0)
                break;
            count++;
        }
    }
    return 0;
}