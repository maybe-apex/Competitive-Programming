#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a[3] = {0, 0, 0}, i = 0;
    int n;
    cin >> n;
    n *= 3;
    while (n--)
    {
        int x;
        cin >> x;
        a[i++ % 3] += x;
    }
    for (auto i : a)
    {
        if (i)
            return cout << "NO", 0;
    }
    cout << "YES";

    return 0;
}