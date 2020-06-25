#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, x, a[1000];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n, greater<int>());
    cout << a[0] << " ";
    for (int i = 1; i < n; i++)
    {
        if (a[0] % a[i] != 0 || a[i - 1] == a[i])
        {
            return cout << a[i], 0;
        }
    }
}