#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int mx = a[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] <= mx)
            b[i] = mx + 1 - a[i];
        else
            mx = a[i], b[i] = 0;
    }
    b[n - 1] = 0;
    for (int i = 0; i < n; i++)
        cout << b[i] << " ";
    return 0;
}