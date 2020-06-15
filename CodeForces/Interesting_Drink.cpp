#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, t;
    int a[100005];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> t;
    sort(a, a + n);
    while (t--)
    {
        int b;
        cin >> b;
        cout << upper_bound(a, a + n, b) - a << endl;
    }
    return 0;
}