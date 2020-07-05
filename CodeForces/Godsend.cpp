#include <iostream>

using namespace std;

int main()
{
    int n, s = 0, pos = -1;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
        if (s & 1)
            pos = i;
    }
    int x = 0;
    for (int i = pos + 1; i < n; i++)
    {
        x += a[i];
    }
    if (x % 2 || pos == n - 1)
        cout << "First";
    else
        cout << "Second";

    return 0;
}