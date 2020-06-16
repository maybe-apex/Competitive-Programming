#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n, t, a[100000];
    set<int> b;
    cin >> n >> t;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for (int i = n; i >= 1; i--)
    {
        b.insert(a[i]);
        a[i] = b.size();
    }

    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        cout << a[x] << endl;
    }

    return 0;
}