#include <iostream>
#include <algorithm>

using namespace std;
int n, c, a[1000000];

bool WhetherDistancePossible(int dist)
{
    int i, cows_placed = 0;
    long long lastpos = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] - lastpos >= dist)
        {
            lastpos = a[i];
            cows_placed++;
            if (cows_placed == c)
                return true;
        }
    }
    return false;
}

int MaxMinDistance()
{
    int mid, start = 0, end = a[n - 1] - a[0];
    while (start < end)
    {
        mid = (start + end) / 2;
        if (WhetherDistancePossible(mid))
            start = mid + 1;
        else
            end = mid;
    }
    return start - 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> c;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        cout << MaxMinDistance();
    }

    return 0;
}