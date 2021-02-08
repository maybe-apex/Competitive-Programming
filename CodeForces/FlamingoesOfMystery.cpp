#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n - 1];
    cout << "? 1 2\n";
    fflush(stdout);
    cin >> a[0];
    cout << "? 2 3\n";
    fflush(stdout);
    cin >> a[1];
    cout << "? 1 3\n";
    fflush(stdout);
    cin >> a[2];

    int x = a[0] + a[1] + a[2];
    x /= 2;
    a[0] = x - a[1];
    a[1] = x - a[2];
    a[2] = x - a[0] - a[1];
    // cout << a[0] << " " << a[1] << " " << a[2] << endl;
    int m = n - 3, i = 3;
    while (m--)
    {
        int y;
        cout << "? " << i << " " << i + 1 << endl;
        fflush(stdout);
        cin >> y;
        a[i] = y - a[i - 1];
        i++;
    }
    cout << "! ";
    for (int j = 0; j < n; j++)
        cout << a[j] << " ";

    return 0;
}