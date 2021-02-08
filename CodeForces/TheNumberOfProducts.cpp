#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x > 0)
            a[i] = 1;
        else
            a[i] = x * -1;
    }
    return 0;
}