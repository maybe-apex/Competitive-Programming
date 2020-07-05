#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    // for (int i = 2; i < n; i++)
    // {
    if (a[n - 1] >= a[n - 2] + a[n - 3])
        return cout << "NO", 0;
    // }
    swap(a[n - 1], a[n - 2]);
    cout << "YES\n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}